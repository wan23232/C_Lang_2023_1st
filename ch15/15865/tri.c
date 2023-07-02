#include <stdio.h>
void oneline (int n){
	for(int l=1;l<=n;l++){
		printf("%d ",l);
	}
}

void bigline (int n){
	for(int l=n;l>=1;l--){
	oneline(l);
	printf("\n");
	}
}
void bigtri(int n){
	for(int l=1;l<=n;l++){
		bigline(l);
		printf("\n");
	}
}
int main()
{
	int size;

	scanf("%d",&size);

	bigtri(size);



}
