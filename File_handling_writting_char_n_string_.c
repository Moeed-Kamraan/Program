#include<stdio.h>
#include<stdlib.h>

int main()
{

FILE *fp=NULL;

char nam[20]="ashfaq";


//char ch = 'd';
fp=fopen("abc.txt","w");

if(fp==NULL)
{

printf("error");
exit(1);

}
//fputc(ch,fp);
fputs(nam,fp);
fclose(fp);



}