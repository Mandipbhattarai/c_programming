#include <stdio.h>

// with return value and without arguments
int takenumber()
{
    int i;
    printf("Enter a number");
    scanf("%d", &i);
    return i;
}

int main()
{
    int c;
    c = takenumber();
    printf("The number entered  is %d\n", c);

    return 0;
}
