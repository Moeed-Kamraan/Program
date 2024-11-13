#include<stdio.h>


struct student
{
    /* when the order of the data members is either in 
    increasing order or decreasing order the memory consumption
    is less otherwise more in case of non packing*/
    char b;
    int a;
    char c;
    //char b;
    
}stu;

int main()
{


printf("%d",sizeof(stu));

return 0;

}
