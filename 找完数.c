#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	int t,i,j,sum=0;
	t=atoi(argv[1]);
	for(i=1;i<=t;i++)
	{
		for(j=1;j<i;j++)
		{
			if(i%j==0) sum+=j;
		}
		if(sum==i) fprintf(fp,"%d ",i);
		sum=0;
	}
	fclose(fp);
	return 0;
}
