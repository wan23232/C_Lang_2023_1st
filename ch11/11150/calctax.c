#include <stdio.h>
int main()
{
	float rate_1;		//첫번쨰 구간의 세율
	float rate_2;		//두번째 구간의 세율
	float rate_3;		//세번째 구간의 세율
	int income;		//소득
	int tax;		//세액

	rate_1 = 0.05;
	rate_2 = 0.1;
	rate_3 = 0.2;

	scanf("%d",&income);

	if( income <= 10000000 ){
		tax = income * rate_1;

	}else if( income <= 20000000 ){
		tax = ( 10000000 * rate_1 )  + ( ( income - 10000000 ) * rate_2 ) ;

	}else{
		tax = ( 10000000 * rate_1 ) + ( 10000000 * rate_2 ) + ( ( income - 20000000 ) * rate_3 ) ;

	}

	printf("%d원\n",tax);

	return 0;
}
