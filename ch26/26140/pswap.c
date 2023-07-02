#include <stdio.h>
void pswap( int * one, int * two  ){
	// 두개의 정수를 바꾼다.
	int temp;
	temp=*one;
	*one=*two;
	*two=temp;
}

int main(){
	int first,second;

	scanf("%d%d", &first, &second);
	printf("pswap 호출 전: %d %d\n", first, second);
	pswap( &first, &second ); // 이 줄은 약간 수정이 필요하다.
	printf("pswap 호출 후: %d %d\n", first, second);
	return 0;
}
