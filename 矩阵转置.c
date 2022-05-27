#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	int x,i,j,k=1;
	x=sqrt(argc);
	int a[x][x];
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			a[i][j]=atoi(argv[k]);
			k++;
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			fprintf(fp,"%d ",a[j][i]);
		}
	}
	fclose(fp);	
	return 0;
}
