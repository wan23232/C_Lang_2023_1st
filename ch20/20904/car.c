#include <stdio.h>
#define MAX_BR 21
#define MAX_CAR 11

void inputAllSales(int data[MAX_BR][MAX_CAR],int numBR, int numCAR){
	// 데이터 입력을 하고, 차종별, 대리점별 합까지 구한다.
	for(int row=1;row<=numBR;row++){
		for(int col=1;col<=numCAR;col++){
			scanf("%d",&data[row][col]);
		}
	}
	int sum_CAR[MAX_CAR]={0};
	for(int col=1;col<=numCAR;col++){
		for(int row=1;row<=numBR;row++){
			sum_CAR[col]+=data[row][col];
			data[0][col]=sum_CAR[col];
		}
	}
	int sum_BR[MAX_BR]={0};
	for(int row=1;row<=numBR;row++){
		for(int col=1;col<=numCAR;col++){
			sum_BR[row]+=data[row][col];
			data[row][0]=sum_BR[row];
		}
	}
	int sum_total=0;
	for(int col=1;col<=numCAR;col++){
		sum_total+=data[0][col];
		data[0][0]=sum_total;
	}
}

void printAll(int data[MAX_BR][MAX_CAR],int numBR, int numCAR){
	// 출력 예시와 같은 모양으로 출력한다.
	for(int row=0;row<=numBR;row++){
		for(int col=0;col<=numCAR;col++){
			printf("%d\t",data[row][col]);
		}
		printf("\n");
	}
}

void morecar(int data[MAX_BR][MAX_CAR],int numBR,int numCAR){
	for(int n=0;n<=numCAR;n++){
		for(int col=numCAR;col>1;col--){
			if(data[0][col]>data[0][col-1]){
				int temp[MAX_CAR]={0};
				for(int row=0;row<=numBR;row++){
					temp[col]=data[row][col];
					data[row][col]=data[row][col-1];
					data[row][col-1]=temp[col];
				}
			}
			}
		}
	}




void sort(int data[MAX_BR][MAX_CAR],int numbr, int numcar){
	// Bubble 정렬을 한다.
	// 보조 함수를 잘 만들어서 처리해야 만점을 받을 수 있다.
	morecar(data,numbr,numcar);
}

int main(){
	int data[MAX_BR][MAX_CAR];
	int numBr;   // 실제 대리점 수
	int numCar;  // 실제 차종 수
	// 대리점 수와 차종 수를 입력한다.
	scanf("%d%d", &numBr, &numCar);

	// 데이터를 입력한다.
	inputAllSales(data, numBr, numCar);

	//출력한다.
	printAll(data, numBr, numCar);

	// 잘 팔린 차가 왼쪽에 오도록 정렬한다.
	sort(data, numBr, numCar);

	printf("\n");
	
	//출력한다.
	printAll(data, numBr, numCar);
}
