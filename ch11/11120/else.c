#include <stdio.h>
int main(){
	int x,y;
	scanf("%d %d", &x, &y);

	if (x>0) {
		if (y>0) printf("둘다 양수\n");
	} else {
		printf("x는 음수\n");
	}
}
