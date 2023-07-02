#include <stdio.h>
int main()
{
	//1. 마일리지 차감을 계산
	//2. 신용카드 차감을 계산
	//3. 유료 거리를 계산한다.
	//4. 가격을 계산한다.
	//5. 잔여 마일리지 실적을 계산
	//6. 신용카드 실적 나머지를 계산
	//7. 순서에 맞게 출력
	//
	//거리, 항공료, 신용카드 사용 실적, 마일리지 실적,
	//요금, 잔여 마일리지, 잔여 신용카드 사용 실적

	//입력에 사용할 변수들

	int mileage_point;		//마일리지 실적
	int credit_usage;		//신용카드 사용 실적
	int distance;			//비행 거리

	//차감에 필요한 변수들

	int deduct_mile;		//마일리지로 차감하는 거리
	int deduct_credit;		//신용카드로 차감하는 거리

	int paid_distance;		//유료 거리
	int total_price;		//총 금액

	//데이터 입력
	printf("거리, 마일리지(마일), 신용카드 사용액(원) 순서대로 빈칸으로 구분하여 입력하시오.\n");
	scanf("%d %d %d",&distance,&mileage_point,&credit_usage);

	/*
	   입력 데이터 출력
	   printf("거리:%d \n마일리지(마일):%d \n신용카드 사용액(원):%d \n",distance,mileage_point,credit_usage);
	   */

	//마일리지 차감
	if( mileage_point >= 10000){
		deduct_mile = mileage_point / 10;		//10%
		if( deduct_mile > distance){
			deduct_mile = distance;
		}

	}else{
		deduct_mile = 0;

	}
	printf("마일리지 차감:%d 마일\n",deduct_mile);

	int remaining_distance;		//차감하고 남은 거리
	remaining_distance = distance - deduct_mile;


	//신용카드 차감

	int credit_to_use;			//얼만큼의 실적을 써야 remaining_distance 만큼 차감하는지 계산할 변수

	if( remaining_distance > 0){				//마일 공지를 하고 난 후에도 거리가 남았을때
		if( credit_usage > 300000){
			credit_to_use = ( credit usage - 300000 ) / 10000 * 1;
			if( credit_usage > 700000){
				credit_to_use = ( credit_usage - 300000 ) / 10000 * 1.5
			}else{
				deduct_credit = 0;

			}


		}else{										//마일 공지를 하고 난 후에, 남은 거리가 0이하 일 경우
			deduct_credit = 0;

		}

		printf("신용카드 차감:%d 마일\n",deduct_credit);

		//remaining_distance
		if( remaining_distance <= 1000 ){
			//기본요금+ 마일당 200원
		}else if ( remaining_distance <= 2000){
			//기본 + 1000 * 200 + ...
		}else {

		}



		return 0;
	}
