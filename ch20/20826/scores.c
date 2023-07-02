#include <stdio.h>
#define NUM_STU 120
#define NUM_SUB 20
void print_data(int data[NUM_STU][NUM_SUB],int n_stu,int n_sub){	//데이터를 출력하는 함수
	printf("학번\t\t");
	for(int i=1;i<=n_sub;i++){
		printf("과목%d\t",i);
	}
	printf("합계\t");
	printf("\n");
	for(int row=0;row<n_stu;row++){
		for(int col=0;col<=n_sub+1;col++){
			printf("%d\t",data[row][col]);
		}
		printf("\n");
	}
}
void set_sum_to_stu(int sum[],int data[NUM_STU][NUM_SUB],int n_student,int n_subject){	//합계를 데이터 안에 넣는 함수
	for(int stu=0;stu<n_student;stu++){
		data[stu][(n_subject+1)]=sum[stu];
	}

}
void cul_sum(int sum[],int data[NUM_STU][NUM_SUB], int n_stu,int n_sub){	//합계를 구하는 함수
	for(int stu=0;stu<n_stu;stu++){
		for(int sub=1;sub<=n_sub;sub++){
			sum[stu]+=data[stu][sub];
		}
	}
}
void change_sum(int sum[],int data[NUM_STU][NUM_SUB],int n_stu,int n_sub){	//모든 내용을 내림차순으로 변경
	for(int i=0;i<n_stu;i++){
		for(int stu=n_stu-1;stu>0;stu--){
			if(sum[stu]>=sum[stu-1]){
				int temp=0;
				temp=sum[stu];
				sum[stu]=sum[stu-1];
				sum[stu-1]=temp;
				for(int i=0;i<=n_sub;i++){
				int temp=0;
				temp=data[stu][i];
				data[stu][i]=data[stu-1][i];
				data[stu-1][i]=temp;
				}

			}
		}
	}

}

int main()
{
	int data[NUM_STU][NUM_SUB]={{0,}};
	int sum[NUM_STU]={0};
	int n_student;
	int n_subject;

	printf("학생 수, 과목 수를 입력하십시오\n");
	scanf("%d %d",&n_student,&n_subject);

	for(int i=0;i<n_student;i++){
		scanf("%d",&data[i][0]);
	}

	for(int sub=1;sub<=n_subject;sub++){
		for(int stu=0;stu<n_student;stu++){
			scanf("%d",&data[stu][sub]);
		}
	}

	cul_sum(sum,data,n_student,n_subject);

	change_sum(sum,data,n_student,n_subject);
	
	set_sum_to_stu(sum,data,n_student,n_subject);

	print_data(data,n_student,n_subject);





}
