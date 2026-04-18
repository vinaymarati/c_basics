/********************************************************************

*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 06-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include <linux/fb.h>
#include <sys/ioctl.h>
#include<sys/mman.h>

int main(int argc,char *argv[])
{
	int fbFD, bmpFD;
	 int size;
	int ret_fxinfo,ret_vinfo;

	//read the smem_len from fix_info
    struct fb_fix_screeninfo fix_info; //fixed screen information

	//read the xres,yres ,bits_per_pixel from var_info
    struct fb_var_screeninfo var_info; //configurable screen info
	
    struct stat finfo;

    unsigned int *fb_ptr,temp;
    char buff[80];

	/*STEP 1 Findout variable Framebuffer resolution & fixed framebuffer length */

	fbFD=open(argv[1],O_RDWR);
	if(fbFD<0)
	{
		perror("DEVICE file open error:");
		return 0;
	}
	
	ret_fxinfo=ioctl(fbFD,FBIOGET_FSCREENINFO ,&fix_info);
	if(ret_fxinfo<0)
	{
		perror("ERROR FB0:");
	}

	 //printf("xres:%d  yres:%d  bits_per_pixel:%d\n", fix_info.xres,fix_info.yres,fix_info.bits_per_pixel);
      	
	ret_vinfo=ioctl(fbFD,FBIOGET_VSCREENINFO , &var_info);
	if(ret_vinfo<0)
	{
		perror("ERROR FB0: ");
	}
     printf("xres:%d  yres:%d  bits_per_pixel:%d\n", var_info.xres,var_info.yres,var_info.bits_per_pixel);
	
	
	//STEP 2 Find out bmp image resolution
	bmpFD=open(argv[2],O_RDONLY);
	if(bmpFD<0)
	{
		perror("error bmpimage: ");
		
	}
	
	int ret;
	ret=read(bmpFD,buff,80);
	if(ret<0)
	{
		perror("READ bmperror: ");
	}
	
	//width of the bixmap in pixels (image > xres)
	unsigned  int *x_res=(unsigned int *)&buff[0x12];        
	printf("%u\n",*x_res);
	

	//height of the bitmap in pixles (image >yres)
	unsigned int *y_res=(unsigned int *)&buff[0x16];
	printf("%u\n",*y_res);
	
	//Number of bits per pixel (image bits_per_pixel)
	unsigned short int *z_bits=(unsigned short int *)&buff[0x1c];
	printf("%u\n",*z_bits);		

	size = fix_info.line_length * var_info.yres;

	if((*x_res>=var_info.xres) && (*y_res>=var_info.yres) && (*z_bits>=var_info.bits_per_pixel))
	{
		perror("bmp image error:");	
	}
	
   fb_ptr = (unsigned int *) mmap (0, size, PROT_READ|PROT_WRITE, MAP_SHARED, fbFD, 0);
	
	int lseek_ret;
	lseek_ret= lseek(bmpFD,54,SEEK_SET);
	if(lseek_ret<0)
	{
		perror("lseek error: ");
	}
	
	int line_length =(fix_info.line_length/4);
	
	int i=0,j=0;
	for(i = (*y_res )- 1;i >= 0;i--)
	{
		
		for(j = 0;j < (*x_res);j++)
		{
			read(bmpFD, &temp, 4);
			//temp = (temp & 0xFF00FF00) |( (temp & 0x00FF0000) >> 16) | ((temp & 0x000000FF)<<16);
			fb_ptr[i * line_length + j] = temp;
		}
	}
	munmap(fb_ptr,size);


   return 0;
}

