#include <stdio.h>
#define MAX_SUBJ 10
#define MAX_STU 100
#define MAX_NAME_LEN 15
typedef struct student{
	char name[MAX_NAME_LEN+1];
	int scores[MAX_SUBJ];
	float average;
} student_t ;

void get_data(student_t st[MAX_STU], int nStu, int nSubj){
	for(int i=0;i<nStu;i++){
		scanf("%s",st[i].name);
		for(int n=0;n<nSubj;n++){
			scanf("%d",&st[i].scores[n]);
		}
	}
}

void calc_average(student_t  st[MAX_STU], int nStu, int nSubj){
	for(int i=0;i<nStu;i++){
		float sum=0;
		float avr=0;
		for(int n=0;n<nSubj;n++){
			sum+=st[i].scores[n];
		}
		avr=sum/nSubj;
		st[i].average=avr;
	}


}

void print_data(student_t st[MAX_STU], int nStu,int nSubj){
	for(int i=0;i<nStu;i++){
		printf("%s\t",st[i].name);
		for(int n=0;n<nSubj;n++){
			printf("%d\t",st[i].scores[n]);
		}
		printf("%f\n",st[i].average);
	}
	printf("\n");

}

void bubble_up(student_t  st[MAX_STU], int top, int bottom){
	// bubble_up 함수는 top 부터 bottom까지의 구조체 중에서
	// 가장 average가 큰 것이 위로 가도록 밑에서부터
	// 두개씩 비교해서 올리는 함수로 만든다.
	student_t temp;
	if(st[top].average<st[bottom].average){
		temp=st[top];
		st[top]=st[bottom];
		st[bottom]=temp;
	}
}

void sort_student(student_t st[MAX_STU], int nStu){
	// bubble_up 을 여러번 호출하여 정렬을 시킨다.	
	// 불필요한 호출을 하지 않도록 최적화한다.
	// bubble_up 최초 호출은 1등을 골라내게 하고
	// 두번째 호출은 2등을, .... 이렇게 한다.
	for(int n=0;n<nStu;n++){
		for(int i=0;i<nStu-1;i++){	
			bubble_up(st,i,i+1);
		}
	}

}
int main(){
	student_t  st[MAX_STU] ={};  // 0으로 초기화
	int nStu, nSubj;
	printf("학생수와 과목 수 입력:\n");
	scanf("%d %d", &nStu, &nSubj);

	// 성적을 입력한다. 
	get_data(st, nStu, nSubj);
	
	// 입력된 데이터를 확인하자.
	print_data(st, nStu, nSubj);

	// 평균을 계산하여 저장하자.
	calc_average(st, nStu, nSubj);
	
	// 정렬한다.
	sort_student(st, nStu);

	// 정렬된 데이터를 출력.
	print_data(st, nStu, nSubj);

	return 0;
}
