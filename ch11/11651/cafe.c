#include <stdio.h>
int main()
{
	//입력에 넣을 변수들

	int coffee;		//지금 주문한 커피의 양
	int mj_point;	//MJ 포인트
	int credit;		//신용카드 실적(원단위)

	//계산에 필요한 변수들
	
	int dc_point;		//MJ 포인트로 할인한 커피 잔 수
	int after_point;	//MJ 포인트로 할인하고 난 후 남은 커피 잔 수
	int dc_credit;		//신용카드로 할인한 커피 잔 수
	int total_coffee;	//할인이 끝난 후 계산할 커피 잔 수

	//출력에 필요한 변수들
	
	int using_point;		//소진된 MJ포인트
	int price_dc_point;		//MJ 포인트로 할인된 금액
	int using_credit;		//소진된 신용카드 실적
	int price_dc_credit;	//신용카드로 할인된 금액
	int total_price;		//지불할 금액
	int rest_point;			//잔여 mj포인트
	int rest_credit;		//잔여 신용카드 실적

	printf("주문한 커피의 양, MJ포인트, 신용카드 실적(원단위)를 입력하시오.\n");
	scanf("%d %d %d", &coffee,&mj_point,&credit);

	//MJ 포인트로 커피를 할인 할 때
	
	if( mj_point>=12 ){				//포인트를 사용가능할때, 즉 12개 이상일때.
		dc_point = (mj_point / 12);

	}else{							//포인트를 사용 불가할때, 즉 12개 미만일때
		dc_point = 0;

	}

	if( dc_point > coffee/2 ){		//포인트로 할인 될 커피가 커피값의 50%초과인 경우
		dc_point = coffee /2;

	}else{
		dc_point = dc_point;

	}

	after_point = coffee - dc_point;



	//신용카드 공제로 커피를 할인 할때 

	if( credit>300000 ){			//신용카드 실적이 30만원 초과로, 커피를 할인 할 수 있는 경우
		dc_credit = ( credit - 300000 ) / 100000 ;


	}else{							//신용카드 실적이 30만원 이하로, 커피를 할인 할 수 없는 경우
		dc_credit = 0;

	}

	if( dc_point >= coffee/2 ){		//포인트로 할인 될 커피가 이미 커피값의 50%를 초과한 경우, 만약 초과되었다면 dc_point=coffee/2이다. 따라서 dc_point=coffee/2 일때 이식은 켜지는것과 마찬가지다.
		dc_credit = 0;

	}else{								//포인트로 할인 될 커피가 커피값의 50% 이하라 신용카드 할인이 적용 되는 경우
		if( dc_point + dc_credit > coffee /2 ){			//포인트 + 신용카드 할인을 통해 커피값의 50%가 넘는경우
			dc_credit = after_point-(coffee/2);		//포인트공제후남은커피-커피 잔수의 반  = 커피의 반값까지 남은 커피잔이  나옴

		}else{																//포인트 + 신용카드 할인을 통해 커피값이 50%가 넘지 않는경우
			dc_credit = dc_credit;

		}

	}

	total_coffee=after_point - dc_credit;

	using_point = dc_point * 12;
	price_dc_point = dc_point * 4000;
	using_credit = dc_credit * 100000;
	price_dc_credit = dc_credit * 4000;
	total_price = total_coffee * 4000;
	rest_point = mj_point - using_point + total_coffee;
	rest_credit = credit - using_credit;

	printf("소진된 MJ 포인트 : %d \n",using_point);
	printf("MJ 포인트로 할인된 금액 : %d \n",price_dc_point);
	printf("소진된 신용카드 실적 : %d \n",using_credit);
	printf("신용카드로 할인된 금액 : %d \n",price_dc_credit);
	printf("지불할 금액:%d \n",total_price);
	printf("잔여 MJ포인트:%d \n",rest_point);
	printf("잔여 신용카드 실적:%d \n",rest_credit);

	return 0;
}
