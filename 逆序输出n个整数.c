#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char** argv)
{
	FILE *fp;
	fp=fopen("result.txt","w");
	int i;
	for(i=argc-1;i>=1;i--)
		fprintf(fp,"%d ",atoi(argv[i]));
	fclose(fp);	
	return 0;
}
