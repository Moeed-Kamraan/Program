#include<stdio.h>
#include<stdlib.h>

FILE *fp=NULL;

int main()

{

fp=fopen("ab.txt","r+");
if(fp==NULL)
{
    printf("error");
    exit(1);

}
fputs("fgfggf",fp);

fclose(fp);
return 0;
}
