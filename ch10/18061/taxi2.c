#include <stdio.h>
#define PER_KM 400 // 거리당 요금
#define PER_TM_UNIT 500 // 시간 단위당 요금
#define NUM_PSG_PERCENT 0.05 // 승객수 요금 계산시 페센트.

int main()
{
    // 입력에 필요한 변수들
    int distance;  // 거리(km) - 정수
    int time;   // 소요시간(분)
    int num_passenger;  // 승객 수

    // 요금 종류별 변수
    int fare_dist;  // 거리 요금
    int fare_time;  // 시간 요금
    int fare_num;   // 승객 수 요금
    int fare_total; // 총 요금


    printf("거리(km) 소요시간(분) 승객 수(명)을 정수로 입력: ");
    scanf("%d %d %d", &distance, &time, &num_passenger);

    // 거리 요금은 km 당 400원. 단순 곱셈.
    fare_dist = distance * PER_KM;
    fare_time = time / 10 * PER_TM_UNIT ;
    fare_num = fare_dist * NUM_PSG_PERCENT * ( num_passenger - 1 );
    fare_total = 2000 + fare_dist + fare_time + fare_num;


    // 결과 출력
    //printf("거리요금: %d\n" "시간요금: %d\n" "승객 수 요금: %d\n"
    printf("총 요금: %d\n", fare_total);
}
