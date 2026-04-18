/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 01-04-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main(int argc,char * argv[])
{
    int c;
    FILE *in, *out;

    in = fopen(argv[1],"r");
    out = fopen(argv[2],"w");
	if(in==NULL)
	{
		perror("Error fille: ");
	}
	

    while((c = fgetc(in)) != EOF)
        fputc(c,out);

    exit(0);
}

