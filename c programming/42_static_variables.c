#include <stdio.h>
/*
int func1()
{
    return 34;
}
int main()
{
    printf("The value of func1 is %d\n", func1());
    return 0;
}
*/
// static variables needs a constant value
int b = 34; // This is a global variable since it is declared inside main()
int func1(int c)
{
    static int myvar = 4;
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    // printf("The value of b inside func1 is %d\n", b);
    // printf("The address of b inside func1 is %d\n", &b);
    // return b * 10;
    return c + myvar;
}
int main()
{
    int b = 344;
    // printf("The address of b inside func1 is %d\n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("The value of func1 is %d\n", val);
    return 0;
}