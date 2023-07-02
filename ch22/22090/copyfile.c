#include <stdio.h>
int main(int ac, char *av[])
{
	FILE *ifp;
	FILE *ofp;
	int c;

	ifp=fopen("hello.txt","r");
	ofp=fopen("hello2.txt","w");

	while((c=fgetc(ifp))!=EOF){
		fputc(c,ofp);
	}
	fclose(ifp);
	fclose(ofp);
	
	return 0;
}

