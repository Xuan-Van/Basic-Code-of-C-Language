#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	int i,t,a=0,b=0,c=0;
	t=strlen(argv[1]);
	for(i=0;i<t;i++)
	{
		if(argv[1][i]>='0'&&argv[1][i]<='9') b++;
		else if(argv[1][i]>='A'&&argv[1][i]<='Z'||argv[1][i]>='a'&&argv[1][i]<='z') a++;
		else c++;
	}
	fprintf(fp,"%d %d %d",a,b,c);
	fclose(fp);	
	return 0;
}
