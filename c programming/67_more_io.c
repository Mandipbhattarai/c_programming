#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    // ptr = fopen("myfile.txt", "r");
    // char c = fgetc(ptr);
    // printf("The character I read was %c\n", c);
    // c = fgetc(ptr);
    // printf("The character I read was %c\n", c);

    // char str[34];
    // fgets(str, 4, ptr);
    // printf("The character I read was %s\n", str);

    ptr = fopen("myfile.txt", "r");
    fputc('o', ptr);
    fputs("This is mandip", ptr);

    fclose(ptr);

    return 0;
}