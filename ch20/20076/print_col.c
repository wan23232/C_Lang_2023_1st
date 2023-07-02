#include <stdio.h>
#define NUM_ROWS 3
#define NUM_COLS 4
int main(){
	int score[NUM_ROWS][NUM_COLS] = { 
		{ 11, 22, 33, 44},
		{ 111, 222, 333, 444},
		{ 1111, 2222, 3333, 4444 }
	};

	for(int row=0;row<NUM_ROWS;row++){
		printf("%d",score[row][1]);
		printf("\n");
	}
		
	// 
	return 0;
}
