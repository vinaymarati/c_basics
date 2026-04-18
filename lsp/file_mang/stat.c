/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 02-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>


int main(int argc,char *argv[])
{
	int ret;
	struct stat file_info;
	if(argc!=2)
	{
		perror("file error: file name is not given \n");
		exit(0);
	}
	ret=stat(argv[1],&file_info);
	if(ret==-1)
	{
		perror("stat() error: ");
		exit(0);
	}

	printf("File permissions and file-type information: %u\n",file_info.st_mode);
    printf("The inode associated with the file: %lu\n",file_info.st_ino);
	printf("The device the file resides on: %lu\n",file_info.st_dev);
	printf("The user identity of the file owner: %u\n",file_info.st_uid);
	printf("The group identity of the file owner: %u\n",file_info.st_gid);
	printf("The time of last acces: %lu\n",file_info.st_atime);
	printf("The time of last change to permissions, owner, group, or content: %lu\n",file_info.st_ctime);
	printf("The time of last modification to contents: %lu\n",file_info.st_mtime);
	printf("The number of hard links to the file: %lu\n",file_info.st_nlink);
   return 0;
}

