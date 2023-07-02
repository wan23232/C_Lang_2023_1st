#include <stdio.h>
int main(int ac, char *av[])
{
	FILE *fp1;
	FILE *fp2;
	FILE *fp3;
	FILE *fp4;
	char name_[100];
	int eng_s;
	int math_s;

	fp1=fopen("names","r");
	fp2=fopen("eng","r");
	fp3=fopen("math","r");
	fp4=fopen("all.txt","w");

	if(fp1==0||fp2==0||fp3==0){
		fprintf(stderr,"Error\n");
		return 1;
	}

	while(fscanf(fp1,"%s",name_)!=EOF&&fscanf(fp2,"%d",&eng_s)!=EOF&&fscanf(fp3,"%d",&math_s)!=EOF){
		fprintf(fp4,"%s %d %d\n",name_,eng_s,math_s);
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fclose(fp4);

	return 0;
}


