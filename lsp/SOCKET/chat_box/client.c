/********************************************************************


*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 15-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/
//cat /usr/include/linux/un.h to se the structure

#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<sys/un.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>
#include<arpa/inet.h>
#include<netinet/in.h>

void *transmitter_thread(void *arg);
void *receiver_thread(void *arg);
char buff[50];
char recv_buff[50];

	int sockfd;
	int len,ret;
	struct sockaddr_in address;
	int result;


int main()
{
	pthread_t transmitter,receiver;

	/*	Create a socket for the client */
	
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	
	/*Name the socket,as agreed with the server */
	
	address.sin_family=AF_INET;
	address.sin_addr.s_addr=inet_addr("192.168.2.105");
	address.sin_port=9734;

	
	len=sizeof(address);
	
	/*	Now connect our socket to the server's socket */
	
		
	result=connect(sockfd,(struct sockaddr *)&address,len);
	
	if(result ==-1)
	{
			perror("opps: client 1");
			exit(1);
	}
	
	
	//creating threads for transmitting and receiving
	ret=pthread_create(&transmitter,NULL,transmitter_thread,NULL);
	if(ret!=0)
	{
		perror("thread creation fail\n");
	}
	
	ret=pthread_create(&receiver,NULL,receiver_thread,NULL);
	
	if(ret!=0)
	{
		perror("Thread creation fail for consumer thread\n");
	}

while(1);
return 0;
}


void *transmitter_thread(void *arg)
{
	while(1)
	{		
		//printf("Send msg to server: ");
		if(fgets(buff,sizeof(buff),stdin)>0)
		{
			write(sockfd,buff,sizeof(buff));
			printf("\n");
			for(int i=0;i<sizeof(buff);i++)
				buff[i]=0;
		}
	}

}

void *receiver_thread(void *arg)
{
		while(1)
		{
		
		if(read(sockfd,recv_buff,sizeof(buff))>0)
		{
		//printf("Receive msg from server: ");
		write(1,recv_buff,sizeof(buff));
		for(int i=0;i<sizeof(buff);i++)
		recv_buff[i]='\0';
		printf("\n");
		}
	}
	
}

