#include<stdio.h>
#include<stdlib.h>
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	long m,n,a,b,c,i,x[3]={0};
	for(i=1;i<3;i++)
		x[i]=atoi(argv[i]);
	m=x[1];
	n=x[2];
	if(m<1||n<1) fprintf(fp,"I");
	else
	{
		if(m>=n)
		{
			a=m;
			b=n;
		}
		else
		{
			a=n;
			b=m;
		}
		while(b>0)
		{
			c=a%b;
			a=b;
			b=c;
		}
		fprintf(fp,"%ld %ld",a,m*n/a);
	}
	fclose(fp);	
	return 0;
}
