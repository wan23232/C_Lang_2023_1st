#include <stdio.h>
int sum_array(int count, int data[]){ 
   // 전체의 합을 구해서 돌려준다.
   int sum=0;
   for(int n=0;n<count;n++){
	   sum+=data[n];
   }
   return sum;
}

int main(){
	int math[5]={ 1,5,6,7,8};
	int english[4] = { 50, 60, 70, 80 };
	int sum=0;
	sum= sum_array (5, math);
	// sum 출력
	
	printf("%d\n",sum);

	sum = sum_array(4, english);
	// sum 출력
	
	printf("%d\n",sum);
	return 0;
}
