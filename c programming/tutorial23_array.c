#include <stdio.h>

// array 1d
int main()
{
    int marks[] = {34, 55, 66, 54};
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of the array %d\n", i, marks[i]);
    }

    /*
       int marks[4] = {34, 55, 66, 54};
        for (int i = 0; i < 4; i++)
        {
            printf("Enter the value of %d element of the array\n", i);
            scanf("%d", &marks[i]);
        }

        for (int i = 0; i < 4; i++)
        {
            printf("Enter the value of %d element of the array %d\n", i, marks[i]);
        }
      */

    /* int marks[4];
    marks[0] = 34;
    printf("Marks of student 1 is %d\n", marks[0]);
    marks[0] = 4;
    marks[1] = 24;
    marks[2] = 34;
    marks[3] = 44;
    printf("Marks of student 1 is %d\n", marks[0]);
    */

    return 0;
}
