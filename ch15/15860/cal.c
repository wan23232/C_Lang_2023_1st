#include <stdio.h>
//평년 윤년 확인
int is_leap_year(int year){
	if(( (year % 4) == 0 && ( year % 100 ) != 0) || ( year % 400 ) == 0 ){
		return 1;
	}
	return 0;

}



//해의 시작 요일 확인
int get_start_dow_year(int year){
	//1970~year-1 날짜 총 합 계산, 나머지 계산
	int sum;
	int start_dow_year;
	sum=0;
	start_dow_year=0;
	for(int limit=1970;limit<year;limit++){
		if(is_leap_year(limit)){
			sum+=366;
		}else{
			sum+=365;

		}
	}
	start_dow_year=(sum+4)%7;

	return start_dow_year;

}
//그 달이 몇일까지 있는지 확인
int get_num_days(int year, int month){
	//2월 제외 switch-case
	//2월 윤년평년
	switch(month){
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			return 31;
			break;
		case 4:case 6:case 9:case 11:
			return 30;
			break;
		case 2:
			if(is_leap_year(year)){
				return 29;
			}
			return 28;
			break;


	}
}
//달의 시작 요일 확인
int get_start_dow_month(int year, int month){
	//그 해의 시작 요일을 알아야한다.
	int dow_month=0;
	dow_month+=get_start_dow_year(year);
	for(int limit=1;limit<month;limit++){
		dow_month+=get_num_days(year,limit);
	}

	return (dow_month % 7);


}
void print_cal(int start_dow,int num_days){
	printf("일\t월\t화\t수\t목\t금\t토\n");
	for(int limit=0;limit<start_dow;limit++){
			printf("*\t");
		}
	for(int limit=1;limit<=num_days;limit++){
		if((limit+start_dow)%7==1){
			printf("\n");
		}
		printf("%d\t",limit);

	}
	printf("\n");

}
int main()
{
	int year;
	int month;
	int start_dow;
	int num_days;

	scanf("%d %d",&year,&month);

	start_dow = get_start_dow_month(year, month);

	num_days = get_num_days(year,month);

	print_cal(start_dow, num_days);

}
