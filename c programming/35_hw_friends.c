#include <stdio.h>
#include <string.h>

int main()
{
    char friend1[20];
    char friend2[20];
    char friend3[20];
    printf("Enter two friends name\n");
    gets(friend1);
    gets(friend2);
    puts(strcat(friend1, friend2));

    return 0;
}