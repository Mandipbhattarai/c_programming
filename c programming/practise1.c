#include <stdio.h>

// 1. Write a program to print the first ten natural numbers
/*
int main()
{
    printf("The first ten natural numbers are: \n");
    for (int i = 1; i <= 30; i++)
    {

        printf("%d\n", i);
    }
    return 0;
}
*/

// 2. Write a program to find the sum of first 10 natural number
/*
int main()
{
    int a = 0, b = 10, sum;
    for (int i = 0; i <= 10; i++)
    {
        sum = a + i;
        a = sum;
    }
    printf("The sum of first 10 natural number is : %d\n", sum);
    return 0;
}
*/

// Write a program in C to display n terms of natural number and their sum.
/*
int main()
{
    int n, sum, a = 0;
    printf("Enter the number of items to sum \n", n);
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        sum = i + a;
        a = sum;
    }
    printf("The sum of %d terms of natural numbers is : \n %d \n", n, a);

    return 0;
}
*/

// 4. Write a program in C to read 10 numbers from keyboard and find their sum and average.
/*
int main()
{
    int n, sum = 0;
    float avg;
    printf("Input the 10 numbers : \n");
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter number-%d: \n", i);
        scanf("%d", &n);
        sum += n;
    }
    avg = sum / 10.0;
    printf("The sum is: %d \nThe average is %f\n", sum, avg);
    return 0;
}
*/

// 5. Write a program in C to display the cube of the number upto given an integer.
/*
int main()
{
    int i, n, cube;
    printf("Enter number of terms to take the cube \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        cube = i * i * i;
        printf("The number is %d and its cube is %d\n", i, cube);
    }

    return 0;
}
*/

// 6. Write a program in C to display the multiplication table of a given integer.
/*
int main()
{
    int n;
    printf("Enter the number to get multiplication table of: \n", n);
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
*/

//  7. Write a program in C to display the multiplication table vertically from 1 to n.
/*
int main()
{
    int n, items;
    printf("Enter the number to get the multiplication table of: \n");
    scanf("%d", &n);
    printf("Enter the number of items of multiplication table of: \n");
    scanf("%d", &items);
    for (int i = 1; i <= items; i++)
    {
        printf("%d * %d = %d , ", n, i, n * i);
    }
    printf("\n");
    return 0;
}
*/
