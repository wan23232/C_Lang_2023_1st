#include <stdio.h>
int main()
{
	/*
	 1.소득,부양가족수,신용카드 사용액,의료비 지출, 기부금을 정수로 입력받음(단, 금액은 만 단위 정수임)
	 2.소득, 신용카드 사용액,의료비 지출,  기부금은 만원단위로 입력받았기에 다시 원으로 바꿔서 저장함 (*10000)
	 3.if이용, 신용카드 사용액이 1000만원 초과라면 (신용카드 사용액 - 1000만)*0.1을 신용카드 공제 변수에 저장, else는 0 저장
	 4.(부양가족수 * 100만)을 부양가족 공제 변수에 저장
	 5.if이용, 의료비가 수입의 5%초과시 의료비 공제 = 의료비, else시 의료비 공제 = 0 저장
	 6. 기부금 공제액 = 기부금 저장
	 7. 소득에서 4가지 공제 계산 및 저장을  마치고난 후 ,소득 - 4가지 공제액을 통해 과세대상 소득을 구함
	 (단 이때, 소득보다 총 공제액이 크면 과세 대상 소득은 0임.) <<----- 버전 1에서 쓰지 않아서 수정했습니다.
	 9. 이 과세대상 소득에  누진세율을 적용함. if사용
	 10. 4가지 각각 공제액, 총 공제액(4가지 공액을 다 더함), 과세대상소득액, 총 세금액을 출력함
	 */

	int  income;				//올해의 소득
	int  num_family;			//부양가족 수
	int  credit_card;			//신용카드 사용액
	int  medical_expense;		//의료비 지출
	int  donate;				//기부금
	
	int  family_dedution;		//가족 공제액
	int  credit_dedution;		//신용카드 공제액
	int  medical_dedution;		//의료비 공제액
	int  donate_dedution;		//기부금 공제액
	int  total_dedution;		//총 공제액
	int  taxable_income;		//과세대상 소득액
	int  total_tax;				//총 세금액			<<--버전 3에서  추가 안하였습니다 
	
	
	//입력값들을 표준입력받음
	printf("올해의 소득, 부양가족 수, 신용카드 사용액, 의료비 지출, 기부금을 입력하시오( 명, 만원단위 )\n");
	scanf("%d %d %d %d %d",&income, &num_family, &credit_card, &medical_expense, &donate);
	
	//입력값은 만원단위기에, 원단위로 변환
	income = income *10000;
	credit_card = credit_card * 10000;
	medical_expense = medical_expense * 10000;
	donate = donate * 10000;

	//신용카드 공제액 계산
	if( credit_card > 10000000){		
		credit_dedution = (credit_card - 10000000) * 0.1;

	}else{
		credit_dedution = 0;

	}
	
	//의료비 공제액 계산
	if( medical_expense > ( income*0.05 ) ){
		medical_dedution = medical_expense;

	}else{
		medical_dedution = 0;

	}
	
	family_dedution = ( num_family * 1000000 );			//가족 공제액 계산
	donate_dedution = donate;							//기부 공제액 계산
	total_dedution = family_dedution + credit_dedution + medical_dedution + donate_dedution ;	//총 공제액 계산
	taxable_income = income - total_dedution ;			//과세 대상 소득액 계산

	//과세대상 소득액 추가  계산
	if(taxable_income<total_dedution){					//총 공제액이 과세대상 소득액보다 클때의 계산
		taxable_income = 0;
	

	}else{
		taxable_income=taxable_income;

	}
	
	//세금 계산
	if( taxable_income<= 10000000 ){		//과세 대상 소득액이 천만원 이하일때
		total_tax = taxable_income * 0.01;

	}else if( taxable_income<= 20000000){	//과세 대상 소득액이 천만원 초과, 이천만원 이하일때
		total_tax = ( 10000000 * 0.01 ) + (taxable_income-10000000) * 0.03;

	}else if( taxable_income<= 30000000){	//과세 대상 소득액이 이천만원 초과, 삼천만원 이하일때
		total_tax = ( 10000000 * 0.01 ) + ( 10000000 * 0.03 ) + ( taxable_income-20000000 ) * 0.1;
				
	}else{									//과세 대상 소득액이 삼천만원 초과일때	
		total_tax = ( 10000000 * 0.01 ) + ( 10000000 * 0.03 ) + (10000000 * 0.1 ) + ( taxable_income-30000000 ) * 0.2;
	}


	
	//구한 결과들을 출력함.
	printf("가족 공제액:%d \n신용카드 공제액:%d \n의료비 공제액:%d \n기부금 공제액:%d \n총 공제액:%d \n과세 대상 소득액:%d \n총 세금액:%d \n",
			family_dedution,credit_dedution,medical_dedution,donate_dedution,total_dedution,taxable_income,total_tax);

	return 0;
}
