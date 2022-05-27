#include<stdio.h>
#include<stdlib.h>
int sxh(int x)
{
	int i,a,b,c,y;
	a=x/100;
	b=x/10%10;
	c=x%10;
	y=a*a*a+b*b*b+c*c*c;
	if(x==y) return 1;
	else return 0;
} 
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	int i;
	for(i=100;i<999;i++)
	{
		if(sxh(i)) fprintf(fp,"%d ",i);
	}
	fclose(fp);	
	return 0;
}
