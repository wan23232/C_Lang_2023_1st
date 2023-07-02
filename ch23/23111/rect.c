#include <stdio.h>
struct rect {
	// 구조체를 정의하라.
	int width;
	int height;
};

// 함수를 정의하라.
int area(struct rect r){
	int temp=0;
	temp=(r.height*r.width);
	return temp;
}

int main(){
	struct rect r;
	//r의 높이와 너비를 입력
	scanf("%d",&r.height);
	scanf("%d",&r.width);
	int ar = area(r);
	printf("면적은 %d\n", ar);
	return 0;
}
