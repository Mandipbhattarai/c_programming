#include <stdio.h>

// without return value and with arguments
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", '*');
    }
}
int main()
{

    printstar(7);

    return 0;
}
