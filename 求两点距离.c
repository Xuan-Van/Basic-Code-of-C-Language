#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double fun(char** argv)
{
	int k;
	double a[5]={0},d;
	for(k=1;k<5;k++)
		a[k]=atoi(argv[k]);
	d=sqrt((a[1]-a[3])*(a[1]-a[3])+(a[2]-a[4])*(a[2]-a[4]));
	return d;
} 
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	double ret;
	ret=fun(argv);
	fprintf(fp,"%.2lf",ret);
	fclose(fp);	
	return 0;
}
