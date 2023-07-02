#include <stdio.h>
int main()
{
	int year;		//입력받을 연도

	scanf("%d",&year);

	if(( (year % 4) == 0 && ( year % 100 ) != 0) || ( year % 400 ) == 0 ){		//4의 배수면서 100의 배수가 아니거나, 400의 배수인경우
		printf("윤년\n");

	}else{
		printf("평년\n");			//100의 배수이거나, 4로 나눠떨어지지 않거나, 100의 배수이지만  400의 배수가 아닌경우
	}
}
