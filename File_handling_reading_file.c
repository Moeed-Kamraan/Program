#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char ch;
FILE *fp=NULL;

char nam[20];

fp=fopen("abc.txt","r");

if(fp==NULL)
{

printf("error");
exit(1);

}
ch=fgetc(fp);
printf("%c",ch);


fclose(fp);

return 0;


}