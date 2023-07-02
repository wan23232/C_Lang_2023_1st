#include <stdio.h>
#define NROW 4 
#define NCOL 4
void change_col (int a, int b,int data[NROW][NCOL]){
	for(int i=0;i<NROW;i++){
	int temp=0;
	temp=data[i][b];
	data[i][b]=data[i][a];
	data[i][a]=temp;
	}
}
void print_data (int data[NROW][NCOL]){
	for(int row=0;row<NROW;row++){
		for(int col=0;col<NCOL;col++){
			printf("%d ",data[row][col]);
		}
		printf("\n");
	}
}
int main(){
	int data[NROW][NCOL] = {
		{ 1,2,3,4 }, 
		{3,4,5,6}, 
		{5,6,7,8}, 
		{7,8,9,10} };
	int a, b;

	//print_data(data);

	printf("바꾸고 싶은 열 번호 두개를 입력하세요(열번호는 0번부터).\n");
	scanf("%d%d", &a, &b);
	
	change_col(a,b,data);
	// 1. a 열과 b 열을 바꾸라. 반복문을 사용한다. (함수로 작성)
	
	print_data(data);
	// 2. 배열의 내용을 행렬 모양으로 순서대로 출력하라. (함수로 작성)

	return 0;
}
