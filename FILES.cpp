#include <stdio.h>
int main()
{
	FILE*fp;
	fp =fopen ("C:\\Users\\didde\\Documents\\ppsc\\FILE-1.txt","r+");
	fseek(fp,0,SEEK_END);
	fprintf(fp,"cse_13");
	rewind(fp);
fprintf(fp,"Hello World");
	fclose(fp);
	return 0;
}
