#include <stdio.h>
void print_matrix(int mat[10][10],int row,int col){
	for(int i=0;i<row;i++){
		for(int n=0;n<col;n++){
			printf("%d ",mat[i][n]);
		}
		printf("\n");
	}
}
void print_border(int mat[10][10],int row,int col){
	for(int i=0;i<row;i++){
		printf("%d ",mat[i][0]);
	}
	for(int i=1;i<col;i++){
		printf("%d ",mat[row-1][i]);
	}
	for(int i=row-2;i>=0;i--){
		printf("%d ",mat[i][col-1]);
	}
	for(int i=col-2;i>=1;i--){
		printf("%d ",mat[0][i]);
	}
}
int main(){
	int mat[10][10];
	int numRow;  // 행의 개수
	int numCol;  // 열의 개수
	
	scanf("%d%d", &numRow, &numCol);

	for(int i=0;i<numRow;i++){
		for(int n=0;n<numCol;n++){
			scanf("%d",&mat[i][n]);
		}
	}
	// 실제 데이터를 읽어들인다.  행렬 모양대로 순차적으로 입력한다.
	
	print_matrix(mat, numRow, numCol); // 행렬 모양대로 출력한다.
	print_border(mat, numRow, numCol); // 테두리만 출력한다.
	return 0;
}
