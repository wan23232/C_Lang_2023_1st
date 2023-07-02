#include <stdio.h>
#define MAX_SUB 10
#define MAX_STU 100
#define MAX_NAME 15

struct student{
	int scores[MAX_SUB];
	char name[MAX_NAME+1];
	float avr;
};

void get_data(struct student st[MAX_STU],int nStu,int nSubj){
	for(int i=0;i<nStu;i++){
		scanf("%s",st[i].name);
		for(int n=0;n<nSubj;n++){
			scanf("%d",&st[i].scores[n]);
		}
	}
	float sum;
	float stu_avr;
	for(int i=0;i<nStu;i++){
		sum=0;
		for(int n=0;n<nSubj;n++){
			sum+=st[i].scores[n];
		}
		stu_avr=sum/nSubj;
		st[i].avr=stu_avr;
	}

}

void print_data(struct student st[MAX_STU],int nStu,int nSubj){
	printf("================================================\n");
	for(int i=0;i<nStu;i++){
		printf("%s\t",st[i].name);
		for(int n=0;n<nSubj;n++){
			printf("%d\t",st[i].scores[n]);
		}
		printf("%f\n",st[i].avr);
	}
}


int main(){
	struct student  st[MAX_STU] ={};  // 0으로 초기화
	int nStu, nSubj;
	printf("학생수와 과목 수 입력:\n");
	scanf("%d%d", &nStu, &nSubj);

	// 성적을 입력한다. 함수 get_data 내부에서 평균까지 계산한다. 
	get_data(st, nStu, nSubj);

	// 입력된 데이터를 확인하자.
	print_data(st, nStu, nSubj);

	return 0;
}
