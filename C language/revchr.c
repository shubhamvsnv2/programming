#include<stdio.h>
int main()
{
    char str[200],count=0,begin,rev[200],end;
    printf("Enter the string you want to reverse \n");
    scanf("%s",&str);
    while (str[count] != '\0')
    {
        count++;
    }
    end = count-1 ;
    for(begin=0; begin<count; begin++)
    {
        rev[begin]=str[end];
        end--;
    }
    rev[begin]='\0' ;   
    puts(rev);
    return 0;
}