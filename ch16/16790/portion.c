#include <stdio.h>
int main()
{
	int portion[10]={0};
	int size;
	int score;

	scanf("%d",&size);

	for(int n=0;n<size;n++){
		scanf("%d",&score);
		portion[(score-1)/10]++;
	}

	for(int n=0; n<10;n++){
		printf("%d-%d:%d %lf%%\n",n*10+1,(n+1)*10,portion[n],(double)portion[n]*100/size);
	}


}
