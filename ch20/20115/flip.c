#include <stdio.h>
#define NUM_ROWS 4
#define NUM_COLS 3
void printMat(int numrows, int numcols, int m[NUM_ROWS][NUM_COLS]){
	for(int row=0;row<numrows;row++){
		for(int col=0;col<numcols;col++){
			printf("%d\t",m[row][col]);
		}
		printf("\n");


	}
	printf("\n");
}
int main(){
	int mat[NUM_ROWS][NUM_COLS] = {
		{ 1000, 1001, 1002 },
		{ 1003, 1004, 1005 },
		{ 1006, 1007, 1008 },
		{ 1009, 1010, 1011 }
	};

	// 0번 행과 1번 행을 바꾼다.

	// 순서대로 행열 모양으로 출력한다. (빈칸 및 줄바꿈으로)
	printMat(NUM_ROWS,NUM_COLS,mat);

	for(int col=0;col<NUM_COLS;col++){
		int temp;
		temp=mat[0][col];
		mat[0][col]=mat[1][col];
		mat[1][col]=temp;
	}


	printMat(NUM_ROWS,NUM_COLS,mat);


	return 0;
}
