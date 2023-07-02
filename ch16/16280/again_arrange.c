#include <stdio.h>
int main()
{
	int num[10];
	int again=0;	//데이터의 순서를 바꾸기위한 임시 변수

	for(int n=0;n<10;n++){
		scanf("%d",&num[n]);
	}

	for(int n=0;n<10;n++){
		printf("%d ",num[n]);
	}

	printf("\n");
	
	for(int n=9;n>=5;n--){
		again=num[n];
		num[n]=num[9-n];
		num[9-n]=again;
	}


	for(int n=0;n<10;n++){
		printf("%d ",num[n]);
	}
	printf("\n");

	return 0;

}
