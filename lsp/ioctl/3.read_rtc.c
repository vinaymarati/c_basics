/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 05-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/
#include <stdio.h>
#include <linux/rtc.h>
#include <sys/ioctl.h>
#include <sys/time.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	int fd,retval;
	struct rtc_time rtc_tm;
	
	/*creating a file descriptor for RTC */
	fd=open(argv[1],O_RDONLY);
	if(fd<0)
	{
		perror("Requested device cannot be opend");
		exit(0);
	}
	
	//reading current RTC Date/Time 
	retval=ioctl(fd,RTC_RD_TIME,&rtc_tm);
	if(retval<0)
	{
		perror("ioctl");
		exit(0);
	}
	fprintf(stdout,"\nCurrent RTC Date/Time: %d-%d-%d %02d:%02d:%02d\n",rtc_tm.tm_mday,rtc_tm.tm_mon+1,rtc_tm.tm_year+1900,
    rtc_tm.tm_hour,rtc_tm.tm_min,rtc_tm.tm_sec);
   return 0;
}

