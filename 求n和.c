#include<stdio.h>
#include<stdlib.h>
int sum(int x)
{
	int k,n=0;
	for(k=x;k>0;k--) 
		n+=k;
	return n;
 } 
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	int ret;
	ret=sum(atoi(argv[1]));
	if(ret<1)
		fprintf(fp,"I");
	else
		fprintf(fp,"%d",ret);
	fclose(fp);
	return 0;
}
