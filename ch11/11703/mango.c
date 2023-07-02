#include <stdio.h>
int main()
{
	int mango;		//구입하려는 망고개수
	int point;		//보유 포인트 수
	int dc_point;	//포인트로 공제받는 망고개수
	int priced_mango;	//구입해야하는 망고 개수
	int price;			//지불해야할 망고 구입 가격	
	int remaining_point;	//잔여 포인트

	printf("구입할 망고 개수와 이전 구입 실적(포인트)를 입력하시오.\n");
	scanf("%d %d",&mango,&point);

	if( point>=12){
		if(point>100){
			if( point>200 ){		//포인트가 200초과인경우
				dc_point = point/8;

			}else{	//포인트가 100초과,200이하인경우
				dc_point = point/10;

			}

		}else{	//포인트가 12이상, 100이하인경우
			dc_point = point/12;

		}

	}else{	//포인트가 12개미만인 경우
		dc_point = 0;

	}

	if( dc_point>(mango*0.4)){	//공제받을 망고 개수가 40%초과시
		dc_point = (mango*0.4);

	}else{//공제받을 망고 개수가 40%이하시
		dc_point = dc_point;


	}

	priced_mango = mango - dc_point;

	if( mango>12){
		if(mango>24){//구입 망고 개수 24개 초과
			price=(12*2000) + ( 12*1900) + (( priced_mango - 24 )*1800);

		}else{		//구입 망고 개수 12개 초과 24개 이하
			price=(12*2000) + ((priced_mango - 12)*1900);


		}	

	}else{		//구입 망고 개수 12개 이하
		price=(priced_mango * 2000);

	}

	//남은 포인트 재산정
	if(point>=12){
		if(point>100){
			if(point>200){	//200초과
				remaining_point = point - (dc_point*8) + priced_mango;

			}else{	//100초과 200이하
				remaining_point = point - (dc_point*10) + priced_mango;

			}

		}else{	//12이상 100이하
			remaining_point = point - (dc_point*12)+priced_mango;

		}

	}else{	//12 미만
		remaining_point = point + priced_mango;

	}

	printf("총 공제 망고 개수:%d\n",dc_point);
	printf("돈을 지불해야하는 망고 개수:%d\n",priced_mango);
	printf("지불해야할 망고 구입 가격:%d\n",price);
	printf("남은 포인트:%d\n",remaining_point);

	return 0;






}
