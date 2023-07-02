#include <stdio.h>
int getData(int d[]){
	int size=0;
	while( scanf("%d",&d[size])==1){
		size++;
	}
	return size;
}
void printData(int size,int d[]){
	for(int n=0;n<size;n++){
		printf("%d ",d[n]);
	}
	printf("\n=============================\n");
}
void changeData(int n, int d[]){
	if (d[n]>d[n+1]){
		//자리바꾸기
		int temp=0;
		temp = d[n];
		d[n]=d[n+1];
		d[n+1]=temp;
	}
}

void maxToEnd(int size, int d[]){
	for(int n=0; n<size-1; n++){
		changeData(n,d);
	}

}
void sort(int size,int d[]){
	for( ;size>=2;size--){
		maxToEnd(size,d);
	}
	
}
int main()
{
	int data[100]; 
	int size;

	size=getData(data);

//	printData(size,data);
//	changeData(0,data);
//	changeData(1,data);
//	maxToEnd(size,data);
 	sort(size,data);
	printData(size,data);
//	printData(size,data);
}
