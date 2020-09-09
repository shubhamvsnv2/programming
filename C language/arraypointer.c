#include<stdio.h>
int main()
{
    // pointer and array are related

    
    int arr[]={1,2,3,4,5,6};
    printf("Value of position 3 of the array %d\n", arr[3]);
    printf("The addresss of first element of the array is %d\n", &arr[0]);
    printf("The addresss of first element of the array is %d\n", arr);
    printf("The address of second element of the array is %d\n", &arr[1]);
    printf("The address of second element of the array is %d\n", arr + 1);


    printf("The value of first element of the array is %d\n", *(&arr[0]));
    printf("The value of first element of the array is %d\n", *(arr));
    printf("The value of second element of the array is %d\n", *(&arr[1]));
    printf("The value of second element of the array is %d\n", *(arr + 1));
    return 0;
}