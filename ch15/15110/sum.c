#include <stdio.h>
int SumToN(int end){
	int sum = 0;
	for(int x=1 ; x<=end ; x++){
		sum+=x;

		
	}
	return sum;
}
int main()
{
	int end;
	int sum;
	
	scanf("%d",&end);

	sum=SumToN(end);
	printf("%d\n",sum);

}
