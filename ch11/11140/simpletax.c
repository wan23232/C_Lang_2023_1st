#include <stdio.h>
int main()
{
	int income;		//소득액
	int age;		//나이
	float tax_rate;	//세율
	float tax;		//세액

	scanf("%d %d",&income , &age);

	if( age < 60 ){							//60세 미만
		if( income <= 10000000 ){			//천만원 이하
			tax_rate = 0.05;

		}else if( income <= 20000000 ){		//천만원 초과 이천만원 이하 
			tax_rate = 0.06;

		}else{								//이천만원 초과
			tax_rate = 0.08; }

	}else{								//60세 이상
		if( income <= 10000000 ){		//천만원 이하
			tax_rate = 0.04;

		}else if( income <= 20000000 ){	//천만원 초과 이천만원 이하
			tax_rate = 0.05;

		}else{							//이천만원 초과
			tax_rate = 0.07;
		}
	}


	tax = income * tax_rate;

	printf("%f원 \n",tax);

	return 0;
}
