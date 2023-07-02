#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// struct book 를 여기에 정의한다.
struct book{
	int price;
	char book[100];
	char name[100];
};

void printAllBooks(struct book *bk[],int num){
	for(int i=0;i<num;i++){
		printf("%s %s %d\n",bk[i]->book,bk[i]->name,bk[i]->price);
	}
}

void sort1(struct book *bk[], int numBook){
	// 마지막 두책만 도서명 순서에 맞게 바꾼다
	if(strcmp(bk[numBook-1]->book,bk[numBook-2]->book)<0){
		struct book *temp;
		temp=bk[numBook-1];
		bk[numBook-1]=bk[numBook-2];
		bk[numBook-2]=temp;
	}
}

void sort2(struct book *bk[], int numBook){
	// 도서면 기중 알파벳 순 가장 빠른 책만 맨 앞으로(0번) 가게 정렬함.
	// 다른 책들의 순서는 변함 없어야함.	
	for(int i=numBook-1;i>=1;i--){
		if(strcmp(bk[i]->book,bk[i-1]->book)<0){
			struct book *temp;
			temp=bk[i];
			bk[i]=bk[i-1];
			bk[i-1]=temp;
		}
	}

}

void sort3(struct book *bk[], int numBook){
	// 같은 방식으로 전체 다 정렬함.
	
	for(int n=0;n<numBook;n++){
		for(int i=numBook-1;i>=1;i--){
		if(strcmp(bk[i]->book,bk[i-1]->book)<0){
			struct book *temp;
			temp=bk[i];
			bk[i]=bk[i-1];
			bk[i-1]=temp;
		}
	}
	}


}

int main(){
	// 포인터 배열 이름을 theBook로 하여 선언
	struct book *theBook[100];
	
	int numBook = 0;   // 책의 개수를 저장할 변수

	// 데이터를 입력하여 구조체 배열에 저장
	
	for(int i=0;i<100;i++){
		theBook[i]=malloc(sizeof(struct book));
	}
	
	while(scanf("%s %s %d",theBook[numBook]->book,theBook[numBook]->name,&(theBook[numBook]->price))==3){
		numBook++;

	}
	
	//
	// 아래 부분은 손대지 말것. 만일 sort2, sort3 등이 미구현이면 
	// 그냥 빈 함수로 둔다
	//
	
	printAllBooks(theBook, numBook);


	
	printf("===\n");
	
	sort1(theBook, numBook);
	printAllBooks(theBook, numBook);
	
	printf("===\n");
	
	sort2(theBook, numBook);
	printAllBooks(theBook, numBook);
	
	printf("===\n");
	
	sort3(theBook, numBook);
	printAllBooks(theBook, numBook);
	printf("===\n");
	
	return 0;
}
