#include <stdio.h>
#include <string.h>
struct drivers
{
    char Name[30];
    char Driving_Licence[30];
    float KM;

} Driver_1, Driver_2, Driver_3;

int main()
{
    printf("<< Welcome to traval agency >>\n\n");
    while (1)
    {
        for (int i = 1; i < 4; i++)
        {
            printf("\tEnter your identy according to the No.\nDriver_%d\nName : ", i);
            scanf("%s", &Driver_1.Name);
            printf("Driving_licence : ");
            scanf("%s", &Driver_1.Driving_Licence);
            printf("KM : ");
            scanf("%f", &Driver_1.KM);
            printf("\n");
            printf("Driver_%d status\n%s\n%s\n%f km\n", i, Driver_1.Name, Driver_1.Driving_Licence, Driver_1.KM);
        }
    }

    return 0;
}