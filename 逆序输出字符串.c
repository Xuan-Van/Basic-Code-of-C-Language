#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	char a[11];
	int i,t;
	t=strlen(argv[1]);
	if(t>10) t=10;
	for(i=1;i<=t;i++)
	{
		a[i]=argv[1][t-i];
		fprintf(fp,"%c",a[i]);
	}
	fclose(fp);	
	return 0;
}
