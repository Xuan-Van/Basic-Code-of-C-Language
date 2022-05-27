#include<stdio.h>
#include<stdlib.h>
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	int x;
	x=atoi(argv[1]);
	if(x<0) fprintf(fp,"I");
	else if(x%2==0) fprintf(fp,"E");
	else fprintf(fp,"O");
	fclose(fp);
	return 0;
 } 
