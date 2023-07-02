#include <stdio.h>
int getSize(int *stu, int *cour){
	printf("학생 수를 입력 하세요\n");	
	if(scanf("%d",stu)!=1){
		return 0;
	}
	for(;*stu<=0||*stu>100;){
		printf("틀렸습니다.\n학생 수를 입력 하세요\n");
		scanf("%d",stu);
	}
	
	printf("과목 수를 입력 하세요\n");
	if(	scanf("%d",cour)!=1 ){
		return 0;
	}
	for(;*cour<=0||*cour>10;){
		printf("틀렸습니다.\n과목 수를 입력 하세요\n");
		scanf("%d",cour);
	}

	return 1;
}
int main(int ac, char *av[])
{
	int numStu; //학생 수
	int numCourse; // 과목 수 

	if (getSize(&numStu,&numCourse) == 1 ){ 
		      printf("학생 수: %d 과목 수: %d\n", numStu, numCourse); 
	} else { 
		      printf("실패\n"); 
}
}
