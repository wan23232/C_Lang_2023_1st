#include <stdio.h>
#define NUM_ROWS 3
#define NUM_COLS 4
// 배열 선언을 #define 을 이용하여 수정한다.
int main(){
	int score[NUM_ROWS][NUM_COLS] = { 
		{1, 2, 3, 4}, 
		{5, 6, 7, 8}, 
		{9, 10, 11, 12} 
	};

	for(int row=0;row<NUM_ROWS;row++){
		for(int col=0;col<NUM_COLS;col++){
			printf("%d\t",score[row][col]);
		}
		printf("\n");
	}



	return 0;
}
