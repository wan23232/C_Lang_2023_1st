#include <stdio.h>
int main()
{
	int sec_i;	//자정부터 경과한 시간(초단위)
	int sec;	//출력할 초
	int minute;	//분
	int time;	//시간

	scanf("%d",&sec_i);			//자정부터 경과한 시간 입력

	time = sec_i / 3600;	//시간 계산
	minute = sec_i % 3600 / 60 ; 	//분 계산
	sec = sec_i % 3600 % 60 ; 	//출력할 초 계산

	/*
	   입력받은 데이터 확인 테스트
	   printf("%d %d %d",time,minute,sec);
	   */


	if( sec_i < 43200 ){			//자정부터 경과한 시간이 하루가 넘지 않는경우, 즉 지난 시간이  86400초 미만들
		printf("오전 %d시 %d분 %d초\n",time,minute,sec);

	}else if( sec_i < 86400 ){
		time=time-12;
		printf("오후 %d시 %d분 %d초\n",time,minute,sec);

	}else{							//자정부터 경과한 시간이 하루를 넘는경우, 즉 지난 시간이 86400초 이상들

		sec_i = sec_i % 86400;		//하루가 지났으므로, 86400의 나머지계산을 하면 n일이 지나도 위와 같은 결과값이 나옴
		time = sec_i / 3600;		// sec_i값에 변화가 있었으므로 변수 선언을 다시해줌
		minute = sec_i % 3600 / 60 ; 	
		sec = sec_i % 3600 % 60 ; 	

		if( sec_i < 43200 ){
			printf("오전 %d시 %d분 %d초\n",time,minute,sec);
		}else{
			time=time-12;
			printf("오후 %d시 %d분 %d초\n",time,minute,sec);
		}


	}
	return 0;

}
