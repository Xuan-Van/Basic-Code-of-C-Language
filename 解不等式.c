#include<stdio.h>
#include<stdlib.h>
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	int n,i;
	double x=1;
	n=atoi(argv[1]);
	if(n>22||n<1) fprintf(fp,"I");
	else
	{
		for(i=2;x<=n;i++)
			x=x+1.0/i;
		fprintf(fp,"%d",i-1);
	}
	fclose(fp);	
	return 0;
}
