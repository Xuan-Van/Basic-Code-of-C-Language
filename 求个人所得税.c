#include<stdio.h>
#include<stdlib.h>
double shui(double x)
{
	double n;
	if(x<0) return -1;
	else
	{
		n=x-1600;
		if(n<=0) return 0;
		else if(n<=500) return n*0.05;
		else if(n<=2000) return (n-500)*0.1+25;
		else if(n<=5000) return (n-2000)*0.15+25+150;
		else if(n<=10000) return (n-5000)*0.2+25+150+450;
		else return (n-10000)*0.3+25+150+450+1000;
	}
} 
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	double ret;
	ret=shui(atoi(argv[1]));
	if(ret==-1) fprintf(fp,"I");
	else fprintf(fp,"%.2lf",ret);
	fclose(fp);	
	return 0;
}
