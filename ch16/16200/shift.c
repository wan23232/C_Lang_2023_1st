#include <stdio.h>
int main()
{
	int score[10];

	for(int n=0;n<10;n++){
		scanf("%d",&score[n]);
	}

	for(int n=0;n<10;n++){
		printf("%d ",score[n]);
	}

	printf("\n");

	for(int n=9;n>0;n--){
		score[n]=score[n-1];
	}

	score[0]=0;


	for(int n=0;n<10;n++){
		printf("%d ",score[n]);
	}

	printf("\n");

	return 0;

}
