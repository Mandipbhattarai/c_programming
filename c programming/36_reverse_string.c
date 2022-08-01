#include <stdio.h>
#include <string.h>
void arrayrev(char arr[])
{
    char str[18];
    strcpy(str, strrev(arr));
    printf("The reversed string is : %s\n", str);
}
int main()
{
    char str1[18];
    printf("Enter what you want to reverse \n");
    gets(str1);
    arrayrev(str1);
}