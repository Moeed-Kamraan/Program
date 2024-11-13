#include<stdio.h>

typedef struct student{

    int rollno;
    char name[20];
    float marks;
}stu;

int main()
{
stu s ={1, "Ashfaq",89.7};

stu *ptr = &s;

printf("%d %s %.2f",(*ptr).rollno,ptr->name,(*ptr).marks);

return 0;

}
