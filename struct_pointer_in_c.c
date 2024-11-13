#include<stdio.h>

struct student{

    int rollno;
    char name[20];
    float marks;
};

int main()
{
struct student s ={1, "Ashfaq",89};

struct student *ptr = &s;

printf("%d %s %f",(*ptr).rollno,ptr->name,(*ptr).marks);

/*Incorrect usage of (*ptr)->rollno: The arrow operator ->
is used with pointers to access structure members directly,
without dereferencing explicitly. So (*ptr)->rollno is 
incorrect. You can simply use ptr->rollno to access the 
members of the structure when you have a pointer to the 
structure.Dereferencing marks incorrectly: You don't need 
to use *ptr->marks. Since marks is a simple data type 
(float), you can just use ptr->marks.*/


 return 0;

}
