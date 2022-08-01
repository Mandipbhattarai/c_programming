#include <stdio.h>

// for loop
int main(int argc, char const *argv[])
{
    int i, j = 0;
    for (i = 0; i < 5; i++, j++)
    {
        printf("%d %d\n", i, j);
    }
    return 0;
}
