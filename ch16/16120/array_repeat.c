#include <stdio.h>
//프로그램을  2개의 while혹은 for 을 이용하여 간략하게 만들어보라.
// 하나는 assignment용 다른 하나는 출력용
int main(){
	int score[5];
	for(int n=0;n<5;n++){
		score[n]=2*n;
	}
	for(int n=4;n>=0;n--){
		printf("%d\n",score[n]);
	}
	return 0;
}
