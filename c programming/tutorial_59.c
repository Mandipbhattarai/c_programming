#include <stdio.h>
#include "51_time.c"
#define PI 3.14
#define square(r) r *r

int main()
{
    float var = PI;
    int l = 4;
    printf("The value of PI is %f\n", var);
    printf("The area of the square is %d\n", square(l));
    return 0;
}