#include <stdio.h>

// with return value and arguments
int sum(int a, int b);
int main()
{
    int a, b, c;
    a = 1;
    b = 2;
    c = sum(a, b);
    printf("The sum is %d\n", c);

    return 0;
}
int sum(int a, int b)
{
    return a + b;
}