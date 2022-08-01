#include <stdio.h>

struct Driver
{
    char name[34];
    char dlNo[45];
    char route[47];
    int kms;
};
int main()
{
    struct Driver d1, d2, d3;
    printf("Enter the details of the first driver\n");
    printf("Enter the name of the first driver\n");
    scanf("%s", &d1.name);

    printf("Enter the dlno of the first driver\n");
    scanf("%s", &d1.dlNo);

    printf("Enter the route of the first driver\n");
    scanf("%s", &d1.route);

    printf("Enter the number of kms of the first driver\n");
    scanf("%d", &d1.kms);

    printf("Enter the details of the second driver\n");
    printf("Enter the name of the second driver\n");
    scanf("%s", &d2.name);

    printf("Enter the dlno of the second driver\n");
    scanf("%s", &d2.dlNo);

    printf("Enter the route of the second driver\n");
    scanf("%s", &d2.route);

    printf("Enter the number of kms of the second driver\n");
    scanf("%d", &d2.kms);

    printf("Enter the details of the third driver\n");
    printf("Enter the name of the third driver\n");
    scanf("%s", &d3.name);

    printf("Enter the dlno of the third driver\n");
    scanf("%s", &d3.dlNo);

    printf("Enter the route of the third driver\n");
    scanf("%s", &d3.route);

    printf("Enter the number of kms of the third driver\n");
    scanf("%d", &d3.kms);

    printf("*********Printing the information of these drivers*********\n");
    printf("For Driver No 1:\n");
    printf("Name is %s:\n", d1.name);
    printf("DL no is %s:\n", d1.dlNo);
    printf("Route is %s:\n", d1.route);
    printf("Kms is %d:\n", d1.kms);

    printf("For Driver No 2:\n");
    printf("Name is %s:\n", d2.name);
    printf("DL no is %s:\n", d2.dlNo);
    printf("Route is %s:\n", d2.route);
    printf("Kms is %d:\n", d2.kms);

    printf("For Driver No 3:\n");
    printf("Name is %s:\n", d3.name);
    printf("DL no is %s:\n", d3.dlNo);
    printf("Route is %s:\n", d3.route);
    printf("Kms is %d:\n", d3.kms);

    return 0;
}