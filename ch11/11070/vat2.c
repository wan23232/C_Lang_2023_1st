// 다음의 프로그램을 if-else를 이용한 구조로 바꾸어라.
#include <stdio.h>
int main(){
	int price;
	int total;
	// 변수 total에 전체 금액을 저장하도록 한다.

	scanf("%d", &price);
	if (price >= 1000){
		total = price * 1.1;
	}else{
		total = price;  // 이줄은 다른 곳으로 이동한다.

	}
	printf("%d\n", total);
	return 0;
}
