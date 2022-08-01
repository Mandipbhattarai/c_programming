#include <stdio.h>
#include <string.h>
struct student
{
    int rollnumber;
    char name[53];
    int percentage;
};
int main()
{
    printf("WELCOME TO _________-_________-_________ SCHOOL\n");
    struct student s, h, a;
    s.rollnumber = 1;
    h.rollnumber = 2;
    a.rollnumber = 3;
    s.percentage = 73;
    h.percentage = 72;
    a.percentage = 67;
    strcpy(s.name, ("sandy"));
    strcpy(h.name, ("sandeep"));
    strcpy(a.name, ("sandu"));
    printf("Roll number %d\t = %s\t  percentage is %d\n", s.rollnumber, s.name, s.percentage);
    printf("Roll number %d\t = %s\t  percentage is %d\n", h.rollnumber, h.name, h.percentage);
    printf("Roll number %d\t = %s\t  percentage is %d\n", a.rollnumber, a.name, a.percentage);
    return 0;
}
