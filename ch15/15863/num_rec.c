#include <stdio.h>
void one_line(int n){
	for (int i=n; i>=1; i--){
		printf("%d ", i);
	}
	printf("\n");

}
void one_triangle( int n ){
	for(int i=1 ; i<=n ;i++){
		one_line(i);
	}
}
void many_triangle( int n ){
	for (int i=1; i<=n ; i++){
		one_triangle(i);
		printf("\n");
	}
}
int main()
{
	int k;
	scanf("%d",&k);
	many_triangle(k);
}
