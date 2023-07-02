#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct book {
	char *book;
	int price;
	char *name;
	
	
	
};

struct book * getBook(){	
	struct book *t;
	t=(struct book *)malloc(sizeof(struct book));
	char buff[100];
	char buff2[100];
	int limit;	
	if(scanf("%s",buff)==1){
		t->book=(char*)malloc(strlen(buff)+1);
		strcpy(t->book,buff);
	}else{
		return 0;
	}

	if(scanf("%s",buff2)==1){
		t->name=(char *)malloc(strlen(buff2)+1);
		strcpy(t->name,buff2);
	}else{
		return 0;
	}

	if(scanf("%d",&limit)==1){
		t->price=limit;
	}else{
		return 0;
	}
	

	return t;


}
void printBook(struct book *b){
	printf("%s ",b->book);
	printf("%s ",b->name);
	printf("%d",b->price);
}
// main 함수는 수정 금지.
int main(){
	struct book * b;
	b = getBook();
	if ( b != 0){
		printBook(b);
	} else {
		printf("실패\n");
	}
	return 0;
}
