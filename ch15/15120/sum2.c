#include <stdio.h>
int Sum2 (int n, int r){
	int sum;
	for(;n<=r;n++){
		sum+=n;
	}
	return sum;
}
int main()
{
	int start;
	int end;
	int sum;

	scanf("%d %d",&start, &end);

	sum = Sum2(start, end);

	printf("%d\n",sum);

}
