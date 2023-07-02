#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(char *wlist[],int size){
	for(int i=size;i>0;i--){
		for(int n=0;n<i-1;n++){
			if(strcmp(wlist[n],wlist[n+1])>0){
				char *temp;
				temp=wlist[n];
				wlist[n]=wlist[n+1];
				wlist[n+1]=temp;
			}
		}
	}
}
void printall(char *wlist[],int size){
	for(int i=0;i<size;i++){
		printf("%s\n",wlist[i]);

	}
}
int main(int ac, char *av[])
{
	char word[100];
	char *word_list[100];
	int numWords=0;

	for(int i=0;scanf("%s",word)==1;i++){
		word_list[i]=malloc(strlen(word)+1);
		strcpy(word_list[i],word);
		numWords++;
	}

	sort(word_list,numWords);

	printall(word_list,numWords);



}
