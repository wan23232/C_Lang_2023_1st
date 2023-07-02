#include <stdio.h>
void oneline(int n){
	for(int l=n;l>=1;l--){
		printf("%d ",l);
	}
}
void bigline(int n){
	for(int l=n;l>=1;l--){
		oneline(l);
		printf("\n");
	}
}
void bigtri(int n){
	for(int l=n;l>=1;l--){
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
