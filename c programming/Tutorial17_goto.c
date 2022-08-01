#include <stdio.h>

int main()
{
label:
    printf("we are inside label\n");
    goto end;

    goto label;
end:
    printf("we are at end\n");

    return 0;
}
