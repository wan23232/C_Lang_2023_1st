#include <stdio.h>
void sort(int data[],int order[],int n){
	for(int t=0;t<n;t++){
		for(int i=0;i<n-1;i++){
			if(data[order[i]]>data[order[i+1]]){
				int temp=0;
				temp=order[i];
				order[i]=order[i+1];
				order[i+1]=temp;
			}
		}
	}
}
int main(){
	FILE * fp;
	int data[10];
	int order[10];

	for(int i=0;i<10;i++){
		order[i]=i;
	}
	// 초기화, 파일 열기 등
	fp=fopen("data.txt","r");	
	// 입력
	for(int i=0;i<10;i++){
		fscanf(fp,"%d",&data[i]);
	}

	sort(data, order, 10);

	// 정렬된 순서대로 출력
	for(int i=0;i<10;i++){
		printf("%d ",data[order[i]]);
	}
	printf("\n");

	// 입력된 순서대로 출력
	for(int i=0;i<10;i++){
		printf("%d ",data[i]);
	}
	
	printf("\n");

	fclose(fp);
	return 0;
}
