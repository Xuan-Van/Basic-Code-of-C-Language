#include<stdio.h>
#include<stdlib.h>
long long fib(int n)
{
	if(n<1||n>45) return -1;
	else if(n==1||n==2) return 1;
	else return fib(n-1)+fib(n-2);
} 
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	int x;
	long long an;
	x=atoi(argv[1]);
	an=fib(x);
	if(an==-1) fprintf(fp,"I");
	else fprintf(fp,"%ld",an);
	fclose(fp);	
	return 0;
}
