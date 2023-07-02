#include <stdio.h>
int main()
{
	FILE *ifp;
	FILE *ofp;
	int one;
	int two;

	ifp=fopen("data.txt","r");
	ofp=fopen("out.txt","w");
	if(ifp==0||ofp==0){
		printf("파일을 열 수 없습니다.\n");
		return 1;
	}

	fscanf(ifp,"%d %d",&one,&two);
	fprintf(ofp,"%d",one+two);

	fclose(ifp);
	fclose(ofp);

	return 0;
}
