#include<stdio.h>
#include<stdlib.h>
int ws(int x)
{
	int t=0; 
	if(x<1) return -1;
	else
	{
		while(x>0)
		{
			x/=10;
			t++;	
		}
		return t;	
	}
	
} 
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	int ret,x;
	x=atoi(argv[1]);
	ret=ws(x);
	if(ret==-1) fprintf(fp,"I");
	else fprintf(fp,"%d",ret);
	fclose(fp);	
	return 0;
}
