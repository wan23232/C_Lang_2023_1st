#include <stdio.h>
int isPrime(int n){
	if(n<2){
		return 0;
	}
	for( int l=2 ; l<=(n/2) ; l++ ){
		if( n%l == 0){
			if(n==2){
				return 1;
			}else{
				return 0;
			}
		}
	}
	return 1;

}
int main(){
	int num;
	scanf("%d", &num);
	if ( isPrime(num) ){
		printf("소수\n");
	} else {
		printf("아님\n");
	}
}



