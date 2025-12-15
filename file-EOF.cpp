#include <stdio.h>
int main ()
{
	FILE *fp,*fp2;
	char ch;
	int i;
	fp=fopen(" C:\\Users\\didde\\Documents\\c-prog\\abc.txt","w");
	while (i<10)
	{
		ch=getchar();
		fputc(ch,fp);
		i++;
	}
	fclose(fp);
	fp=fopen ("C:\\Users\\didde\\Documents\\c-prog\\abc.txt","r");
	fp2=fopen(" C:\\Users\\didde\\Documents\\c-prog\\newabc.txt","w");
	printf("\n enter text :");
	while((ch=fgetc(fp))!=EOF)
	{
		fputc(ch,fp2);
	}
	printf("\n copied successfully");
	fclose(fp);
	fclose(fp2);
	return 0;
	
}
