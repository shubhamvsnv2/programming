#include <stdio.h>
void array(int *ptr)
{
    printf("value of array on index 0 %d\n", ptr[0]);
    printf("value of array on index 1 %d\n", *ptr + 1);
    printf("addresss of array on index 1 %d\n", ptr + 1);
    printf("address of array on index 3 %d\n", &ptr[0]);
}
int main()
{
    int arr[] = {2, 3, 4, 12};
    array(arr);
    return 0;
}