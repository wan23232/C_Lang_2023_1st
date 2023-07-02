#include <stdio.h>
#include <ctype.h>
int main()
{
	int n;		//입력받은 문자를 저장

	n=getchar();

	if( islower(n) ){
		printf("소문자\n");
	}else if( isupper(n) ){
		printf("대문자\n");
	}else{
		printf("기타\n");
	}

	return 0;



}
