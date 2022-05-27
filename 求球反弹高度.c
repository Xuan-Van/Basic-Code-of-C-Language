#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char** argv) 
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	int i,n;
	double h,a[100]={0},x;
	h=atoi(argv[1]);
	n=atoi(argv[2]);
	a[0]=h;
	a[1]=0.5*h;
	x=h;
	for(i=1;i<n;i++)
	{
		a[i+1]=0.5*a[i];
		x+=a[i-1];
	}
	fprintf(fp,"%.2lf %.2lf",x,a[i]);
	fclose(fp);
	return 0;
}
