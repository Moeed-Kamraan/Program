#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char str[10];
FILE *fp=NULL;

char nam[20];

fp=fopen("abc.txt","r");

if(fp==NULL)
{

printf("error");
exit(1);

}

//this will print only 5 char on console including null '\0'
fgets(str,6,fp);
//fgets(str,11,fp);
printf("%s",str);

fclose(fp);

return 0;


}