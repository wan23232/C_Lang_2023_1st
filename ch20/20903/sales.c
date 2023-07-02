#include <stdio.h>
#define MAX_BR 21   // 대리점 최대 수 20 + 1
#define MAX_CAR 11  // 최대 차종 수 10 + 1

void inputAllSales(int data[MAX_BR][MAX_CAR],int numbr,int numcar){
	// 데이터 입력을 하고, 차종별, 대리점별 합까지 구한다.
	for(int row=1;row<=numbr;row++){
		for(int col=1;col<=numcar;col++){
			scanf("%d",&data[row][col]);
		}
	}

	int count_BR[MAX_BR]={0};
	for(int row=1;row<=numbr;row++){	//대리점 별 합
		for(int col=1;col<=numcar;col++){
			count_BR[row]+=data[row][col];
			data[row][0]=count_BR[row];
		}
	}

	int count_CAR[MAX_CAR]={0};
	for(int col=1;col<=numcar;col++){	//차종 별 합 
		for(int row=1;row<=numbr;row++){
			count_CAR[col]+=data[row][col];
			data[0][col]=count_CAR[col];
		}
	}
	int sum=0;
	for(int i=1;i<=numcar;i++){
		sum+=data[0][i];
		data[0][0]=sum;
	}
}

void printAll(int data[MAX_BR][MAX_CAR], int numbr, int numcar){
	// 출력 예시와 같은 모양으로 출력한다.
	for(int row=0;row<=numbr;row++){
		for(int col=0;col<=numcar;col++){
			printf("%d\t",data[row][col]);
		}
		printf("\n");
	}
}

void change_info(int data[MAX_BR][MAX_CAR],int numbr,int numcar){
	for(int i=0;i<=numbr;i++){
	for(int row=numbr;row>1;row--){
		if(data[row][0]>data[row-1][0]){
			int temp[MAX_CAR]={0};
			for(int col=0;col<=numcar;col++){
				temp[col]=data[row-1][col];
				data[row-1][col]=data[row][col];
				data[row][col]=temp[col];
				
			}

		}
	}
	}
}

void sort(int data[MAX_BR][MAX_CAR],int numbr,int numcar){
	// Bubble 정렬을 한다.
	// 보조 함수를 잘 만들어서 처리해야 만점을 받을 수 있다.
	change_info(data,numbr,numcar);
	
}

int main(){
	int data[MAX_BR][MAX_CAR];
	int numBr;   // 실제 대리점 수
	int numCar;  // 실제 차종 수
	// 대리점 수와 차종 수를 입력한다.
	scanf("%d%d", &numBr, &numCar);

	// 데이터(실적)를 입력한다.
	inputAllSales(data, numBr, numCar);

	//출력한다.
	printAll(data, numBr, numCar);

	// 판매 실적 순 내림차순 정렬한다.
	sort(data, numBr, numCar);

	printf("\n");

	//출력한다.
	printAll(data, numBr, numCar);
}
