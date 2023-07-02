#include <stdio.h>
int main()
{
	int score[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	int number;	//입력받을 정수
	int count=0;

	scanf("%d",&number);

	for(int n=0;n<10;n++){
		if(number==score[n]){
			count++;
		}
	}
	
	if(count>0){
		printf("1\n");
	}else{
		printf("0\n");
	}
	
	return 0;
}
