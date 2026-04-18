/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 15-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/
//192.168.2.105 

#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<sys/un.h>
#include<unistd.h>
#include<stdlib.h>
#include<netinet/in.h>
#include<arpa/inet.h>

int main()
{

	int server_sockfd,client_sockfd;
	int server_len,client_len;
	struct sockaddr_in server_address;
	struct sockaddr_in client_address;


	/*remove any old socket and create an unnamed socket for the server 
	unlink("abc_socket"); */
	
	/*Create an unamed socket for the server */
	
	server_sockfd=socket(AF_INET,SOCK_STREAM,0);
	
	/*Name the socket */
	server_address.sin_family=AF_INET;
	server_address.sin_addr.s_addr=inet_addr("192.168.29.106");
	
	server_address.sin_port=9734;
	
	server_len=sizeof(server_address);
	
	bind(server_sockfd,(struct sockaddr *)&server_address,server_len);
		
	/*create a connection queue and wait for clients */
	
	listen(server_sockfd,5);
	while(1)
	{
		char ch;
		printf("Server waiting\n");
		
	/*Accept a connection .*/
	
	client_len=sizeof(client_address);
	client_sockfd=accept(server_sockfd,(struct sockaddr*)&client_address,&client_len);
	sleep(5);
	
	/*We can read/write to client on client_sockfd */
	
	read(client_sockfd,&ch,1);
	ch++;
	write(client_sockfd,&ch,1);
	close(client_sockfd);
	}

   return 0;
}

