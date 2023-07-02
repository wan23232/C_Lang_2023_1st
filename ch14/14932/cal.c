#include <stdio.h>
int main()
{
	int year;	//입력받을 년
	int month;	//입력받을 월
	int price_year;	//윤년, 평년 기록 윤년=0, 평년=1
	//계산에필요한변수들
	int after_year;	//1900년부터 입력년도의 전년도 까지 몇년이 지났는지 계산할때 사용할  변수
	int after_day;	//1900년부터 입력년도의 전년도 까지 몇일이 지났는지 저장할 변수
	int day_week;	//입력년도의 1월 1일은 무슨일인지 계산할때 필요한 변수
	int after_month;//입력 월의 전 월까지 몇월이 지났는지 계산할때 사용할 변수
	int after_day_month;	//입력월의 전 월까지 몇일이 지났는지 저장할 변수
	int day_month;	//입력월의 1일이 무슨 요일인지 계산할때 필요한 변수

	int h;

	day_week = 0;

	scanf("%d %d",&year,&month);

	if(year<1900){
		printf("해당없음\n");
	}else{

	/*
	   if(price_year==1){
	   printf("평년\n");
	   }else{
	   printf("윤년\n");
	   }
	   */

	for(after_year=1900 ; after_year<year ; after_year++){
		if( (after_year%4==0 && after_year%100 != 0) || after_year%400==0){
			price_year = 0;
		}else{
			price_year = 1;
		}

		if(price_year==0){		//윤년일경우 년간 366일이 지남
			after_day+=366;
		}else{					//평년일경우 년간 365일
			after_day+=365;
		}
	}

	day_week = after_day % 7;

	//printf("%d",day_week);

	/*
	   switch(day_week){
	   case 0:	
	   printf("월");
	   break;
	   case 1:	
	   printf("화");
	   break;
	   case 2:	
	   printf("수");
	   break;
	   case 3:	
	   printf("목");
	   break;
	   case 4:	
	   printf("금");
	   break;
	   case 5:	
	   printf("토");
	   break;
	   case 6:	
	   printf("일");
	   break;

	   }
	   */


	if( (year%4==0 && year%100 != 0) || year%400==0){
		price_year = 0;
	}else{
		price_year = 1;
	}

	after_day_month = 0;

	for(after_month=1;after_month<=month;after_month++){
		switch ( after_month ){
			case 2:case 4:case 6:case 8:case 9:case 11:
				after_day_month+=31;
				break;
			case 3:
				if(price_year==0){
					after_day_month+=29;
				}else{
					after_day_month+=28;
				}
				break;
			case 5:case 7:case 10:case 12:
				after_day_month+=30;
				break;
		}
	}

	//printf("%d\n",after_day_month);

	day_month = (after_day_month + day_week)%7  ;

	printf("일\t월\t화\t수\t목\t금\t토\n");

	for(h=0 ; h<=day_month ; h++){
		if(day_month<=5){
		printf("*\t");
		}
	}

	switch ( month ){
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			for(int i=1 ; i<=31 ; i++){
			
				printf("%d\t",i);
				if((day_month+i) % 7 == 6){
					printf("\n");	
				}

				
			}
			break;
		case 2:
			if(price_year==0){	
				for(int i=1 ; i<=29 ; i++){
				printf("%d\t",i);
				if((day_month+i) % 7 == 6){
					printf("\n");	
				}

				}
			}else{
				for(int i=1 ; i<=28 ; i++){
				printf("%d\t",i);
				if((day_month+i) % 7 == 6){
					printf("\n");	
				}
				}
			}
			break;
		case 4:case 6:case 9:case 11:
			for(int i=1 ; i<=30 ; i++){	
				printf("%d\t",i);
				if((day_month+i) % 7 == 6){
					printf("\n");	
				}
			}
			break;
	}

	printf("\n");
	}




}
