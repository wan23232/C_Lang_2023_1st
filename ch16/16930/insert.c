#include <stdio.h>
void insert(int data[],int size, int newitem){
	for(int i=size;i>0;i--){
		if(data[i-1]>newitem){
			int temp=0;
			temp=data[i-1];
			data[i-1]=newitem;
			data[i]=temp;
		}
	}
}
int main()
{
	int score[100] = {11,22,33,44,55,66,77,88,99};
	int curSize = 9;
	int item=0;

	while( scanf("%d",&item)==1){
		insert(score,curSize,item);
		curSize++;
	}

	for(int i=0;i<curSize;i++){
		printf("%d ",score[i]);
	}
	printf("\n");

}
