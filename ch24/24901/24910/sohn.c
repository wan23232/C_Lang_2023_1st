#include <stdio.h>
void Mr_sohn(int num){
	printf("요괴 %d마리 남았음.\n",num);
	if(num>1){
		Mr_sohn(num-1);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	Mr_sohn(n);
	return 0;
}
