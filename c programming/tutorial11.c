#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (age, marks)
    {
    case 3:
        printf("the age is 3\n");
        switch (marks)
        {
        case 45:
            printf("your marks are 45");
            break;

        default:
            printf("your marks are not 45");
        }
        break;

    case 13:
        printf("the age is 13\n");
        break;

    case 23:
        printf("the age is 23\n");
        break;

    default:
        printf("the age is not 3, 13 or 23\n");
    }

    return 0;
}
