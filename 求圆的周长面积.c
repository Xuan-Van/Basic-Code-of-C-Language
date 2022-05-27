#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.1415926
double fa(double x)
{
	return 2*x*pi;
} 
double fb(double x)
{
	return pi*x*x;
}
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	double x;
	x=atoi(argv[1]);
	if(x<0) fprintf(fp,"I");
	else
	{
		double a,b;
		a=fa(x);
		b=fb(x);
		fprintf(fp,"%.2lf %.2lf",a,b);
	}
		fclose(fp);	
	return 0;
}
