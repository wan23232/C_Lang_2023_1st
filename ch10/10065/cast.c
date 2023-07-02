#include <stdio.h>
int main(){
	float average ;	// 틀린 부분을 수정하라.
	int sum ;
	int count ;   // 틀린 부분을 수정하라.
	
	scanf("%d%d", &sum, &count);  // 틀린 부분을 수정하라. 둘 다 정수임.
	average = sum / (double)count ;   // 영균을 구한다. 소수점이하 계산되도록 수정
	
	printf("%f\n", average);
	return 0;
}
