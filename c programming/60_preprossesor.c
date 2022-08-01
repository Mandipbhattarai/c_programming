#include <stdio.h>
#include <stdlib.h>
#define DATE
#define TIME

int main()
{
    // printf("File name is %s\n", __FILE__);
    // printf("Today's Date is %s\n", __DATE__);
    // printf("The current Time is %s\n", __TIME__);
    // printf("Line Number is %d\n", __LINE__);
    // printf("ANSI: %d\n", __STDC__);

#ifdef TIME
    printf("%s\n", __TIME__);
#endif

#ifdef DATE
    printf("%s\n", __DATE__);
#endif

#ifndef TIME
    printf("TIME is undefined\n");
#endif

    return 0;
}