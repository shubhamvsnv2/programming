#include<stdio.h>
int main()
{
    printf("Do you want to shutdown press y for yes and n for n \n");
    Scanf("%c",ch);
    if(ch=='y' || ch=='Y')
    {
        system("C:\\Windows\\System32\\shutdown -s -t 0")
    } 
    else{
        printf("\nyou Enter wrong key for shutdown !\n");
    }
}