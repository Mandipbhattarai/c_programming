#include <stdio.h>
int main()
{
    int a = 34;
    int *ptra = &a;
    printf("%d\n", ptra);
    printf("%d\n", ptra + 1);
    return 0;
}