#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char** argv) 
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	char x;
	int i,t;
	t=strlen(argv[2]);
	x=argv[1][0];
	for(i=0;i<=t;i++)
	{
		if(argv[2][i]>='0'&&argv[2][i]<='9')
			fprintf(fp,"%c%c",x,argv[2][i]);
		else fprintf(fp,"%c",argv[2][i]);
	}
	fclose(fp);
	return 0;
}
