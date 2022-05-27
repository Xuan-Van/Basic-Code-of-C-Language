#include<stdio.h>
#include<stdlib.h>
int main(int argc,char** argv)
{
	FILE *fp;
	if((fp=fopen("result.txt","w"))==NULL)
		return -1;
	int x;
	x=atoi(argv[1]);
	switch(x)
	{
		case 0:fprintf(fp,"S");break;
		case 1:fprintf(fp,"M");break;
		case 2:fprintf(fp,"T");break;
		case 3:fprintf(fp,"W");break;
		case 4:fprintf(fp,"T");break;
		case 5:fprintf(fp,"F");break;
		case 6:fprintf(fp,"S");break;
		default:fprintf(fp,"I");break;
	}	
	fclose(fp);
	return 0;
}
