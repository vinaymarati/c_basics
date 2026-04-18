/********************************************************************
*Name                 : Marati Vinay Kumar
*KMID                 : KM64AEAI16
*Date                 : 18-03-26
*Program              :
*Sample Input         :
*Sample Output        :
*
*************************************************************************/

#define M 1
int main()
{
	#if M==1
	printf("%s\n",__DATE__);
	printf("%s\n",__TIME__);
	printf("%s\n",__FILE__);
	printf("%s\n",__LINE__);
	printf("PROCESSOR \n");
	printf("16-BIT\n");
	#elif M==2
	printf("Processor \n");
	printf("32-BIT\n");
	#elif M==3
	printf("Processor 3\n");
	printf("64-bit\n");
    #else
    printf("No Match");
	#endif
   return 0;
}

