#include <stdio.h>
int main()
{
	int year ; 	//입력받은 년도

	scanf("%d",&year);

	if( year%4==0 ){							//4의 배수면 윤년
		if( year%100 == 0){						
			if( year%400 == 0 ){				//100의 배수인 평년중, 400의 배수는 윤년
				printf("윤년");

			}else{
				printf("평년\n");				//윤년중 100의 배수는 평년

			}

		}else{
			printf("윤년\n");					//100의 배수가 아니고, 4의 배수면 윤년

		}

	}else{
		printf("평년\n");						//4의 배수가 아닌 년은 평년

	}

	return 0;
}
