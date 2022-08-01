#include <stdio.h>

// units conversion
int main()
{
    char input;
    float kmstomiles = 0.621371;
    float inchestofoot = 0.0833333;
    float cmstoinches = 0.393701;
    float poundtokgs = 0.453592;
    float inchestometres = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the input character, q to quit\n1. kms to miles\n2. inches to foot\n3. cms to inches\n4. pound to kgs\n5. inches to metres\n");
        scanf(" %c", &input);

        switch (input)
        {
        case 'q':
            printf("Quiting the program...\n");
            goto end;
            break;

        case '1':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * kmstomiles;
            printf("%.2f Kms is equal to %.2f Miles\n", first, second);
            break;
        case '2':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchestofoot;
            printf("%f Inches is equal to %f Foot\n", first, second);
            break;
        case '3':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * cmstoinches;
            printf("%f Cms is equal to %f Inches\n", first, second);
            break;
        case '4':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * poundtokgs;
            printf("%f Pounds is equal to %f  Kgs\n", first, second);
            break;
        case '5':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchestometres;
            printf("%f inches is equal to %f meters\n", first, second);
            break;

        default:

            break;
        }
    }

end:

    return 0;
}
