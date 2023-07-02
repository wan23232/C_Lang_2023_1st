#include <stdio.h>
#include <string.h>
void Maching(char names[20][100],char *p[]){		//스트링과 포인터를 매칭하는 함수
	for(int i=0;i<20;i++){
		p[i]=names[i];
	}
}

int main(int ac, char *av[])
{
	char names[20][100]={{0}};
	char *ptr[20];
	char *temp;

	int people=0;	//스트링 개수

	for(int i=0;i<20;i++){
		if(scanf("%s",names[i])!=1){
			break;
		}
		people++;

	}

	Maching(names, ptr);

	for(int i=0;i<people;i++){
		for(int j=0;j<people-1;j++){
			if(strcmp(ptr[j],ptr[j+1])>0){
				temp=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=temp;

			}
		}
	}

	for(int i=0;i<people;i++){
		printf("%s\n",ptr[i]);
	}

	printf("\n");

	for(int i=0;i<people;i++){
		printf("%s\n",names[i]);
	}

}
