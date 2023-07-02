#include <stdio.h>
int main()
{
	int price;			//상품가격(원)
	float price_with_tax;	//부가가치세 포함 총가격(원)
	
	scanf("%d",&price);

	if( price>1000 ){
		price_with_tax = price * 1.1;

	}else{
		price_with_tax = price * 1.05;
	}

	printf("%f\n",price_with_tax);
	return 0;
}
