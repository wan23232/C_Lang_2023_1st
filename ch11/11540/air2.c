#include <stdio.h>
int main()
{
	//입력받을 변수

	int dist;		//이번 구입할 항공권의 비행거리
	int mileage;	//이전 여행 실적(마일리지)
	int credit;		//제휴 신용 카드 사용 실적

	//출력할 변수

	int dc_mileage;		//포인트로 차감된 마일 수
	int dc_credit;		//신용카드로 차감된 마일 수
	int priced_dist;	//돈을 지불해야하는 총 거리(마일)
	int total_price;	//항공권 가격(세금 포함)
	int rest_mileage;	//잔여 마일리지 실적
	int rest_credit;	//잔여 신용카드 실적

	//계산에 필요한 변수
	int rest_dist_mileage;	//마일리지 차감을 한 후 남은 거리
	int earned_mileage;		//비행으로 얻은 마일리지

	printf("이번 구입할 항공권의 비행거리, 마일리지 실적, 신용카드 사용실적을 입력하시오.(단위:원)\n");
	scanf("%d %d %d",&dist,&mileage,&credit);

	/*
	   입력값 확인 테스트
	   printf("%d %d %d",dist,mileage,credit);
	   */

	//마일리지를 통한 할인
	if( mileage>=10000 ){
		dc_mileage = mileage * 0.1;

	}else{
		dc_mileage = 0;

	}

	if( dist >= dc_mileage ){	//비행할 거리가 마일리지 차감보다 많거나 같은경우
		rest_mileage = mileage - (dc_mileage*10);
		rest_dist_mileage = dist - dc_mileage;


	}else{						//마일리지 차감이 비행할 거리보다 큰 경우
		rest_mileage = ( dc_mileage - dist )*10 ;
		rest_dist_mileage = 0;
		dc_mileage = dist;//수정

	}

	//신용카드를 통한 할인

	if( credit>300000 ){	 	
		if( credit > 700000 ){	//신용카드 사용액이 70만원 초과인경우
			dc_credit = ( credit - 300000 )*1.5 / 10000  ;
		}else{					//신용카드 사용액이 30만원 초과, 70만원 이하인경우
			dc_credit = ( credit - 300000 ) / 10000 * 1 ;

		}

	}else{							//신용카드 사용액이 30만원 이하인 경우
		dc_credit = 0;

	}

	int dc_credit_won;			//70만원 초과일때, 신용카드로 차감된 가격(만원당 1.5마일이므로, 1마일당 10000/1.5 원이 차감되었음.)

	if( rest_dist_mileage > 0 ){	//마일리지 차감을 한 후 아직 낼 돈이 있는 경우
		if( rest_dist_mileage > dc_credit ){		//마일리지 차감을 한 후 남은 거리가 신용카드 차감액보다 클 경우
			if( credit>300000 ){
				if( credit>700000){
					dc_credit_won = dc_credit / 1.5 * 10000;
					rest_credit = credit - dc_credit_won;
				}else{
					rest_credit = credit - ( dc_credit * 10000 );}
			}else{
				rest_credit = credit; }


		}else{										//마일리지 차감을 한 후 남은 거리가 신용카드 차감액보다 작은 경우(남은거리 200 차감액 500)
			if( credit>300000 ){
				if( credit>700000 ){
					dc_credit = rest_dist_mileage;
					dc_credit_won = dc_credit / 1.5 * 10000;
					rest_credit = credit - dc_credit_won;

				}else{
					dc_credit = rest_dist_mileage;
					rest_credit = ( credit - ( rest_dist_mileage*10000) );

				}
			}else{
				rest_credit = credit; 		
			}
		}
	}else{							//마일리지 차감을 한 후 낼 돈이 없는경우(rest_dist_mileage=0 인 경우)
		rest_credit = credit;
		dc_credit = 0;
	}

	//차감 하고 남은 거리 계산

	if( dist - ( dc_mileage + dc_credit ) > 0 ){			//비행해야하는 총 거리가 총 할인 가격보다 큰 경우
		priced_dist = dist - ( dc_mileage + dc_credit );
	}else{													//비행해야하는 총 거리가 총 할인 가격보다 작은 경우
		priced_dist = 0;
	}

	//마일리지 포인트의 재산정
	earned_mileage = priced_dist;
	rest_mileage = earned_mileage + rest_mileage;

	//차감하고 남은 거리에 대해 금액 계산

	if( priced_dist <= 1000 ){			//돈을 지불해야하는 거리가 1000마일 이내
		total_price = 50000 + ( priced_dist * 200 );

	}else if( priced_dist <= 2000 ){	//돈을 지불해야하는 거리가 1000마일 초과, 2000마일 이내
		total_price = 50000 + ( 1000 * 200 ) + ( priced_dist - 1000 ) * 180;

	}else{								//돈을 지불해야하는 거리가 2000마일 초과
		total_price = 50000 + ( 1000 * 200 ) + ( 1000 * 180 ) + ( priced_dist - 2000 ) * 150;
	}

	total_price = total_price * 1.1;	//부과세 10% 적용

	printf("포인트로 차감된 마일 수:%d miles\n", dc_mileage);
	printf("신용카드로 차감된 마일 수:%d miles\n", dc_credit);
	printf("돈을 지불해야하는 총 거리:%d miles\n", priced_dist);
	printf("부가세 포함 항공권 가격:%d 원\n", total_price);
	printf("남은 마일리지 실적:%d 마일\n", rest_mileage);
	printf("남은 신용카드 실적:%d 원\n", rest_credit);

	return 0;
}
