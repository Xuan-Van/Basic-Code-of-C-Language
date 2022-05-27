#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int ff(int x)
{
	int a,k;
	a=sqrt(x);
	if(x<2) return -1;
	for(k=2;k<=a;k++)
		if(x%k==0) return 0;
	return 1;
}
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	int ret;
	ret=ff(atoi(argv[1]));
	if(ret==-1)
		fprintf(fp,"I");
	else if(ret==0)
		fprintf(fp,"N");
	else if(ret==1)
		fprintf(fp,"Y");
	fclose(fp);
	return 0;
}
