#include<stdio.h>
#include<stdlib.h>
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	int a[4]={0},k,x=0,f=1;
	for(k=1;k<4;k++)
	{
		a[k]=atoi(argv[k]);
		if(a[k]<0||a[k]>100)
		{
			f=0;
		}
		x+=a[k];
	}
	double n;
	n=x/3.0;
	if(f)
	{
		if(n>=80)
		{
			if(a[1]>=90||a[2]>=90||a[3]>=90)
				fprintf(fp,"A");
		}
		else if(a[1]>=75&&a[2]>=75&&a[3]>=75)
			fprintf(fp,"B");
		else if(n>=60)
		{
			if(a[1]>=60&&a[2]>=60||a[1]>=60&&a[3]>=60||a[2]>=60&&a[3]>=60)
				fprintf(fp,"C");
		}
		else fprintf(fp,"D");
	}
	else fprintf(fp,"I");
	fclose(fp);
	return 0;
} 
