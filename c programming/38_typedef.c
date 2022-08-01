#include <stdio.h>

typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;

int main()
{
    // int *a, b;
    typedef int *intoPointer;
    intoPointer a, b;
    int c = 89;
    a = &c;
    b = &c;
    // std s1, s2;
    // s1.id = 56;
    // s2.id = 33;
    // printf("The value of s1's id is %d\n", s1.id);
    // printf("The value of s2's id is %d\n", s2.id);

    // typedef<previous_name><alias_name>;
    // typedef unsigned long ul;
    // typedef int integer;

    // ul l1, l2, l3;
    // integer a = 33;
    // printf("The number is %d\n", a);
    return 0;
}