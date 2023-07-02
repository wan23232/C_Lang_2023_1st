#include <stdio.h>
void prt(int x){
	printf("전달 받은값은 %d입니다.\n",x);
	return;
}

int main()
{
	int n;

	scanf("%d",&n);
	prt(n);

	return 0;
}
