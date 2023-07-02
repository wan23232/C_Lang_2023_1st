#include <stdio.h>
#define MAX_STU 100
int main()
{
	int score[MAX_STU];
	int numStu = 0;


	while (numStu<MAX_STU && scanf("%d",&score[numStu])==1){
		numStu++;
	}

	printf("총 학생 수 :%d \n",numStu);

	for(int n=numStu-1; n>=0; n--){
		printf("%d\n",score[n]);
	}

	/*
	 int l=0;
	for(int n=0;n<MAX_STU;n++){
		if(scanf("%d",&score[n])==1){
			l++;
		}else{
			break;
		}
	}
	for(int n = l-1;n>=0;n--){
		printf("%d ",score[n]);
	}
	*/


}
