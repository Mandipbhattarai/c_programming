#include <stdio.h>
#include <stdlib.h>

int *functionDangling()
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;
    return &sum;
}
int main()
{
    // Case 1: De allocation of a meory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr); // ptr is now dangling pointer

    // Case 2: Function returning local variable address
    int *dangPtr = functionDangling(); // ptr is now dangling pointer

    int danglingPtr3;
    // Case 3 : If a variable goes out of scope
    {
        int a = 12;
        danglingPtr3 = &a;
    }
    // here variable 3 goes out of a scope which means danglingPtr3 is pointing to a location which is freed and hence danglingPtr3 is now a a dangling pointer.

    return 0;
}