#include <stdio.h>
// 배열 선언을 #define 을 이용하여 수정한다.
#define NUM_ROWS 3
#define NUM_COLS 4
int main(){
    int score[NUM_ROWS][NUM_COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

	for(int col=0;col<NUM_COLS;col++){
		for(int row=0;row<NUM_ROWS;row++){
			printf("%d\t",score[row][col]);
		}
		printf("\n");
	}

}
