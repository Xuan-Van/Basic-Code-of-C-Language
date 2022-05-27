#include<stdio.h>
#include<stdlib.h>
long long fact(int x)
{
	if(x<0) return x;
	if(x==0) return 1;
	else return x*fact(x-1);
}
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	long long n,x=0;
	int i;
	n=atoi(argv[1]);
	if(n<2||n>10)
		fprintf(fp,"I");
	else
	{
		for(i=1;i<=n;i++)
			x+=fact(i);
		fprintf(fp,"%ld",x);
	}
	fclose(fp);
	return 0;
}
