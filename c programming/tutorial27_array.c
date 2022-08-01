#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 66};
    int *arrayptr = arr;
    printf("Value at position 3 of the array is %d\n", arr[3]);
    printf("The address of first element of the array is %d\n", &arr[0]);
    printf("The address of second element of the array is %d\n", &arr[1]);
    printf("The address of second element of the array is %d\n", arr + 1);
    printf("The value of arrayptr is %d\n", arrayptr++);
    printf("The Value at address of first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of first element of the array is %d\n", arr[0]);
    printf("The value at address of first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of second element of the array is %d\n", *(&arr[1]));
    printf("The value at address of second element of the array is %d\n", arr[1]);
    printf("The value at address of second element of the array is %d\n", *(arr + 1));

    return 0;
}