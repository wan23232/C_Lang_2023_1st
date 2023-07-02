//버전 5 모든 요소들을 출력하는 출력함수 Print를 제작함.
//change_stu 함수의 int -> float로 고쳤습니다. (현 파일의 22번째 줄)
#include <stdio.h>
int ADD (int data[],int data2[],int data3[]){	//입력 함수
	int size=0;
	for(int n=0;scanf("%d %d %d",&data[n],&data2[n],&data3[n])==3;n++){
		size++;
	}
	return size;
}
void AVR (int d[],int d2[],int size,float d3[]){	//국어,영어점수와 인원 수를 적으면 그들의 평균값을 저장함
	for(int n=0;n<size;n++){
		d3[n]=(float)(d[n]+d2[n])/2;
	}

}

void change_stu(int d[],int d2[],int d3[],int size,float avr[]){
	int a=0;
	int b=0;
	int c=0;
	float av=0;
	for(int i=size;i>0;i--){
	for(int n=size;n>0;n--){
		if(avr[n]>avr[n-1]){
			a=d[n];
			b=d2[n];
			c=d3[n];
			d[n]=d[n-1];
			d2[n]=d2[n-1];
			d3[n]=d3[n-1];
			d[n-1]=a;
			d2[n-1]=b;
			d3[n-1]=c;
			av=avr[n];
			avr[n]=avr[n-1];
			avr[n-1]=av;
	

		}
	}
	}

}

void grade(int size,int n){
	int A=size*0.3;
	int B=size*0.5;
	int C=size*0.7;
	if(n<A){
		printf("A\n");
	}else if(n<B){
		printf("B\n");
	}else if(n<C){
		printf("C\n");
	}else{
		printf("D\n");
	}


}
void Print(int d[],int d2[],int d3[],float d4[],int size){
	printf("size:%d\n",size);
	printf("순위\t학번\t\t국어\t영어\t평균\t\t학점\n");
	for(int n=0;n<size;n++){
		printf("%d\t%d\t%d\t%d\t%f\t",n+1,d[n],d2[n],d3[n],d4[n]);
		grade(size,n);
	}


}
int main()
{
	int size=0;
	int student[100]={0};
	int kor[100]={0};
	int eng[100]={0};
	float avr[100]={0};
	
	size=ADD(student,kor,eng);

	AVR(kor,eng,size,avr);

	change_stu(student,kor,eng,size,avr);

	Print(student,kor,eng,avr,size);
	



	

}
