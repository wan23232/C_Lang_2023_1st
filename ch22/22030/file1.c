#include <stdio.h>
int main()
{
	FILE * fp;
	int one;
	int two;

	fp=fopen("data.txt","r");

	fscanf(fp,"%d %d",&one,&two);

	printf("%d",one+two);

	fclose(fp);
}
