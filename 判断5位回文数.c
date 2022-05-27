#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1; 
	if(argv[1][0]==argv[1][4]&&argv[1][1]==argv[1][3])
		fprintf(fp,"Y");
	else fprintf(fp,"N");
	fclose(fp);	
	return 0;
}
