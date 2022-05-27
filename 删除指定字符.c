#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	char a;
	int i,t,j=0;
	a=argv[1][0];
	t=strlen(argv[2]);
	char b[t];
	for(i=0;i<t;i++)
	{
		if(argv[2][i]!=a)
		{	
			b[j]=argv[2][i];
			j++;
		}
		b[j]='\0';
	}
	for(i=0;b[i]!='\0';i++)
		fprintf(fp,"%c",b[i]);
	fclose(fp);	
	return 0;
}
