#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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
	int n,i,m;
	n=atoi(argv[1]);
	m=n/2;
	if(n<2) fprintf(fp,"I");
	else if(ff(n)) fprintf(fp,"%d",n);
	else
	{
		for(i=2;i<m;i++)
		{
			while(n%i==0)
			{
				fprintf(fp,"%d ",i);
				n/=i;
			}
		}
	}
	fclose(fp);	
	return 0;
}
