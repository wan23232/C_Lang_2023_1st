#include <stdio.h>
#define VSIZE 20  // 위아래로 20줄
#define HSIZE 10  // 옆으로 10칸
void show(char t[VSIZE][HSIZE]){
	// 숫자 모양을 그대로 보여주되
	for(int row=0;row<VSIZE;row++){
		for(int col=0;col<HSIZE;col++){
			printf("%hhd ",t[row][col]);
		}
		printf("\n");
	}
}

int test_one_line(char t[VSIZE][HSIZE],int row){	//한줄을 테스트하여 줄의 모든 글자가 0이 아니면 1을 리턴함
	int count=0;	
	for(int i=0;i<HSIZE;i++){
		if(t[row][i]!=0){
			count++;
		}
	}
	if(count!=10){
		return 0;
	}else{
		return 1;
	}
}

void collapse_one(char t[VSIZE][HSIZE],int row,int testing){	//1을 리턴받아 testing값이 1이면 한줄을 없애고 위로 올림
	if(testing==1){
		for(int i=row;i>0;i--){
			for(int col=0;col<HSIZE;col++){
				t[i][col]=t[i-1][col];	
			}
		}
		for(int i=0;i<HSIZE;i++){
			t[0][i]=0;
		}
	}


}

void collapse(char t[VSIZE][HSIZE]){

	for(int i=VSIZE;i>0;i--){
		int testing=0;
		testing=test_one_line(t,i);
		collapse_one(t,i,testing);
		if(testing==1){		//한 줄이 사라지면 그 줄을 다시 검사해야하기때문에 더함.
			i++;
		}
	}

}

int main(){
	char tet[VSIZE][HSIZE] = {};
	int col, row;
	// 여기서 데이터 입력. char의 입력은 %hhd 로 한다.
	for(row=0;row<VSIZE;row++){
		for(col=0;col<HSIZE;col++){
			scanf("%hhd",&tet[row][col]);
		}
	}

	// 출력해본다.
	show(tet);

	putchar('\n');

	collapse(tet);
	show(tet);
	return 0;
}
