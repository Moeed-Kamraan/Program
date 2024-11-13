#include<stdio.h>

struct student{

    int rollno;
    char name[20];
    float marks;
};

int main()
{
struct student s[3];

int i;

printf("Enter the students roll no, name and marks \n");

for(i=0;i<3;i++)

scanf("%d %s %f ",&s[i].rollno,s[i].name,&s[i].marks);

for(i=0;i<3;i++)

printf("\n%d %s %f ",s[i].rollno,s[i].name,s[i].marks);

return 0;

}
/*scanf("%s", s[i].name) reads input until a space is
encountered, but doesn't handle whitespace well.
If there's a stray newline or space in the input buffer, 
scanf can inadvertently pick that up as an input for the 
name field, causing unexpected behavior.*/