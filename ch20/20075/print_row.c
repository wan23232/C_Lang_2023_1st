#include <stdio.h>
#define NUM_ROWS 3
#define NUM_COLS 4
int main(){
	int score[NUM_ROWS][NUM_COLS] = { 
		{ 11, 22, 33, 44},
		{ 111, 222, 333, 444},
		{ 1111, 2222, 3333, 4444 }
	};

	for(int col=0;col<NUM_COLS;col++){
		printf("%d\t",score[1][col]);
	}
		
	// 
	return 0;
}
