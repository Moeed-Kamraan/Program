#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

FILE *fp=NULL;
int i;
char nam[20];

fp=fopen("abc.txt","w");

if(fp==NULL)
{

printf("error");
exit(1);

}
printf("Enter the string : ");
gets(nam);
for(i=0;i!=strlen(nam);i++)
fputc(nam[i],fp);

fclose(fp);
/*Use of gets(): The gets() function is considered unsafe because it does not perform bounds checking and can cause buffer overflows.
It's better to use fgets() for reading strings.

Incorrect use of fputs(): The fputs() function is used to write a string to a file, but in your code, you're trying to pass a single 
character to it. For writing single characters, fputc() should be used instead.

Missing #include<string.h>: Since you are using strlen(), you need to include the <string.h> library.

Loop condition issue: The loop condition i != strlen(nam) should be i < strlen(nam) to avoid potential confusion.*/



}