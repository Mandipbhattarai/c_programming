#include <stdio.h>
#include <string.h>

union Student
{
    int id;
    int marks;
    char fav_char;
    char name[22];
};

int main()
{
    union Student s1;
    s1.id = 3;
    s1.marks = 23;
    s1.fav_char = 'c';
    strcpy(s1.name, "Harry");
    printf("The id is %d\n", s1.id);
    printf("The marks is %d\n", s1.marks);
    printf("The fav_char is %c\n", s1.fav_char);
    printf("The name is %s\n", s1.name);

    return 0;
}