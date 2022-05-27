#include<stdio.h>
#include<stdlib.h>
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	int a[10]={0},i,m=0,n=0,x=0,f=1;
	m=atoi(argv[1]);
	n=atoi(argv[1]);
	for(i=1;i<11;i++)
	{
		a[i]=atoi(argv[i]);
		if(a[i]<0||a[i]>100) f=0;
		if(a[i]>m) m=a[i];
		if(a[i]<n) n=a[i];
		x+=a[i];
	}
	if(f)
	{
		x=x-m-n;
		double t;
		t=x/8.0;
		fprintf(fp,"%.1lf",t);
	}
	else fprintf(fp,"I");
	fclose(fp);	
	return 0;
}
