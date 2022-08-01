#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     int a, b, c;
//     printf("0 1 ");
//     a = 0;
//     b = 1;
//     for (int i = 1; i <= 42; i++)
//     {

//         c = a + b;
//         a = b;
//         b = c;
//         printf("%d ", c);
//     }
//     return 0;
// }

int fibo(int n);

int main()
{
    printf("0 ");

    for (int i = 1; i <= 42; i++)
    {
        printf("%d ", fibo(i));
    }
    return 0;
}
int fibo(int n)
{
    int res;
    if (n == 1 || n == 0)
        return n;
    else
        res = (fibo(n - 1) + fibo(n - 2));

    return res;
}
