#include<stdio.h>
#include<stdlib.h>
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	int x;
	x=atoi(argv[1]);
	if(x<=0) fprintf(fp,"I");
	else if(x%400==0||x%100!=0&&x%4==0) fprintf(fp,"Y");
	else fprintf(fp,"N");
	fclose(fp);
	return 0;
} 
