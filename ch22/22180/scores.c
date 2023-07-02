#include <stdio.h>
void order_sort(int scores[100][11],int order[],int stu_num,int sub_num){
	for(int i=0;i<stu_num;i++){
		for(int n=0;n<stu_num;n++){
			if(scores[order[n]][sub_num+1]<scores[order[n+1]][sub_num+1]){
				int temp;
				temp=order[n];
				order[n]=order[n+1];
				order[n+1]=temp;
			}
		}
	}
}
int main(int ac, char *av[])
{
	FILE *ifp;
	FILE *ofp;
	int sub_num=0;
	int stu_num=0;
	int scores[100][11]={{0}};
	char name[100][100]={{0}};
	char sub[10][100]={{0}};
	int order[100];

	ifp=fopen("data.txt","r");
	ofp=fopen("result.txt","w");

	fscanf(ifp,"%d %d",&sub_num,&stu_num);

	for(int i=0;i<stu_num;i++){
		order[i]=i;
	}

	for(int i=0;i<stu_num;i++){		//학번,이름 저장
		fscanf(ifp,"%d %s",&scores[i][0],name[i]);
	}

	for(int i=0;i<sub_num;i++){		//과목 명 및 점수 저장
		fscanf(ifp,"%s",sub[i]);
		for(int n=0;n<stu_num;n++){
			fscanf(ifp,"%d",&scores[n][i+1]);

		}
	}

	for(int row=0;row<stu_num;row++){	//합계 계산 및 저장
		int sum=0;
		for(int col=0;col<sub_num;col++){	
			sum+= scores[row][col+1];
		}
		scores[row][sub_num+1]=sum;	
	}

	fprintf(ofp,"학번\t\t이름\t");
	for(int i=0;i<sub_num;i++){
		fprintf(ofp,"%s\t",sub[i]);
	}
	fprintf(ofp,"합계\n");

	order_sort(scores,order,stu_num,sub_num);

	for(int row=0;row<stu_num;row++){
		fprintf(ofp,"%d\t%s\t",scores[order[row]][0],name[order[row]]);
		for(int i=0;i<=sub_num;i++){
			fprintf(ofp,"%d\t",scores[order[row]][i+1]);
		}
		fprintf(ofp,"\n");	
	}

	fclose(ifp);
	fclose(ofp);

}
