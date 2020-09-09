#include<stdio.h>
typedef struct student
{
    char name[50];
    int id;
    int roll;
}std;

int main()
{
    // struct student s1,s2;
    std s1,s2;
    s1.name  = "rahul";
    s1.id =20;
    printf("name %s",s1.name);
    printf("id %d\n",s1.id);
    return 0;
}