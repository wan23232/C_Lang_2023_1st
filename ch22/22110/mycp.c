#include <stdio.h>
int main(int ac, char *av[])
{	
	FILE *ifp;
	FILE *ofp;
	int c;

	if(ac!=3){
		fprintf(stderr,"사용법:mycp 원본파일명  복사파일명\n");
		return 1;
	}

	ifp=fopen(av[1],"r");
	ofp=fopen(av[2],"w");

	while((c=fgetc(ifp))!=EOF){
		fputc(c,ofp);
	}

	fclose(ifp);
	fclose(ofp);

	return 0;


}
