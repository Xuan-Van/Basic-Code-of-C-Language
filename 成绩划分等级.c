#include<stdio.h>
#include<stdlib.h>
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	int x;
	x=atoi(argv[1]);
	if(95<=x&&x<=100) fprintf(fp,"A");
	else if(85<=x&&x<95) fprintf(fp,"B");
	else if(70<=x&&x<85) fprintf(fp,"C");
	else if(60<=x&&x<70) fprintf(fp,"D");
	else if(0<=x&&x<60) fprintf(fp,"E");
	else fprintf(fp,"I"); 
	fclose(fp);
	return 0;
 } 
