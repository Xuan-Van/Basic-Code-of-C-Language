#include<stdio.h>
#include<stdlib.h>
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	int a[4]={0},k;
	for(k=0;k<4;k++)
		a[k]=atoi(argv[k]);
	if(a[1]<1||a[2]<1||a[3]<1)
		fprintf(fp,"I");
	else if((a[1]+a[2])>a[3]&&(a[1]-a[2])<a[3])
		fprintf(fp,"Y");
	else
		fprintf(fp,"N");
	fclose(fp);
	return 0;
} 
