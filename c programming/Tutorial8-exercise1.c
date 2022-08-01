#include <stdio.h>

// multiplication table program
int main()
{
  int n;
  printf("Enter number to do product\n");

  scanf("%d", &n);
  printf("Multiplication table of %d is as follows:\n", n);

  int i = 0;
  do
  {
    i = i + 1;
    printf("%d\n", i * n);
  } while (i < 10);

  return 0;
}
