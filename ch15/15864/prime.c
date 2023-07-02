#include <stdio.h>
int isPrime (int n){
	if(n<2){
		return 0;
	}
	for(int l=2 ; l<=(n/2) ; l++){
		if(n%l == 0){
			if(n==2){
				return 1;
			}else{
				return 0;
			}
		}
	}
	return 1;
}
int main()
{


	for(int limit=2;limit<=1000;limit++){
		if (isPrime(limit)){
			printf("%d ",limit);
		}

	}

}
