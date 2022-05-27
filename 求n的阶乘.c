#include<stdio.h>
#include<stdlib.h>
int factorial(int x)
{
	if(x<0) return x;
	if(x==0) return 1;
	else return x*factorial(x-1);
}
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	int ret;
	ret=factorial(atoi(argv[1]));
	if(ret<0)
		fprintf(fp,"I");
	else
		fprintf(fp,"%d",ret);
	fclose(fp);
	return 0;
}
