#include<stdio.h>
#include<stdlib.h>
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1; 
	char x;
	x=argv[1][0];
	if(65<=x&&x<=91) fprintf(fp,"%c",x+32);
	else if(97<=x&&x<=123) fprintf(fp,"%c",x-32);
	else fprintf(fp,"I"); 
	fclose(fp);
	return 0;
 } 
