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

int main()
{

	int server_sockfd,client_sockfd;
	int server_len,client_len;

	struct sockaddr_un server_address;
	struct sockaddr_un client_address;
	
	/*remove any old socket and create an unnamed socket for the server */
	
	unlink("abc_path");
	
	//creates the object and return the file discriptor
	server_sockfd=socket(AF_LOCAL,SOCK_STREAM,0);
	
	/*Name the socket */
	server_address.sun_family=AF_UNIX;
	strcpy(server_address.sun_path,"abc_path");
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

