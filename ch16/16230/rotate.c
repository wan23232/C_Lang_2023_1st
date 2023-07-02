#include <stdio.h>
int main()
{
	int score[10];
	int last;	//남는 칸의 맨 앞 데이터를 넣기위한 임시 변수
	last=0;
	
	for(int n=0;n<10;n++){
		scanf("%d",&score[n]);
	}
	
	for(int n=0;n<10;n++){
		printf("%d ",score[n]);
	}

	printf("\n");

	last = score[0];

	for(int n=0;n<9;n++){
		score[n]=score[n+1];
	}

	score[9]=last;
	
	for(int n=0;n<10;n++){
		printf("%d ",score[n]);
	}
	printf("\n");

	return 0;


}
