#include <stdio.h>
int main()
{
	int n;	//입력받을 문자를 저장함

	n=getchar();

	if( n>='a' && n<='z' ){
		printf("소문자\n");

	}else{
		printf("기타\n");

	}

	return 0;
	
}
