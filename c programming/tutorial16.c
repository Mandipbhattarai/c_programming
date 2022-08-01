#include <stdio.h>

// break and continue
int main()
{
    printf("hello world\n");
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\nEnter Your Age\n", i);
        scanf("%d", &age);
        // if (age > 10)
        // {
        //     break;
        // }
        if (age > 10)
        {
            continue;
        }
        printf("this is a program\n");
        printf("this is a new program\n");
        printf("this is a c program\n");
        printf("this is a program for break\n");
        printf("this is a program for continue\n");
    }

    return 0;
}
