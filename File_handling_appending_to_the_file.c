#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char str[50];
FILE *fp=NULL;

fp=fopen("abc.txt","a+");

if(fp==NULL)
{

printf("error");
exit(1);
}

printf("Enter the content you want to append on file : " );
gets(str);

fprintf(fp,"\n%s",str);
printf("successfully appended.");
fclose(fp);


return 0;

}