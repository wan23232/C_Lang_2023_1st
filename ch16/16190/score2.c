#include <stdio.h>
int main()
{
	int score[5];
	double avr;
	
	for(int n=0;n<5;n++){
		scanf("%d",&score[n]);
	}
	avr= (double)(score[0]+score[1]+score[2]+score[3]+score[4])/5;

	printf("평균:%lf\n",avr);
	printf("평균 초과:");

	for(int n=0;n<5;n++){
		if(avr<score[n]){
			printf(" %d",score[n]);
		}

	}
	printf("\n");
}
