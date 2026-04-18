/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 15-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/
#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<sys/un.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>
#include<netinet/in.h>
#include<arpa/inet.h>

void *transmitter_thread(void *arg);
void *receiver_thread(void *arg);

	char buff[20];
	char recv_buff[20];
	int server_sockfd,client_sockfd,ret;
	int server_len,client_len;
	struct sockaddr_in server_address;
	struct sockaddr_in client_address;
	

int main()
{
		

	
	pthread_t transmitter,receiver;	
	/*remove any old socket and create an unnamed socket for the server */
	
		
	//creates the object and return the file discriptor
	server_sockfd=socket(AF_INET,SOCK_STREAM,0);
	
	/*Name the socket */
	server_address.sin_family=AF_INET;
	server_address.sin_addr.s_addr=inet_addr("192.168.2.105");
	server_address.sin_port=9734;

	server_len=sizeof(server_address);
	
	bind(server_sockfd,(struct sockaddr *)&server_address,server_len);
		
	/*create a connection queue and wait for clients */
	
	listen(server_sockfd,5);

	printf("Start conversation:\n");
	client_len=sizeof(client_address);
	client_sockfd=accept(server_sockfd,(struct sockaddr*)&client_address,&client_len);
	
	//create thread for transmitting and receiving
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
			//printf("send msg to client: ");
			if(fgets(buff,sizeof(buff),stdin)>0)
			{
				write(client_sockfd,buff,sizeof(buff));
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
			if(read(client_sockfd,recv_buff,sizeof(recv_buff))>0)
			{
				//printf("Recevied from client : ");
				write(1,recv_buff,sizeof(recv_buff));
				printf("\n");
				for(int i=0;i<sizeof(recv_buff);i++)
				recv_buff[i]=0;

			}

		}
}

