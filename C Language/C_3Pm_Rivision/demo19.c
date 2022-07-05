#include <stdio.h>
void main()
{
  int i, num;

  printf("Enter Any Number...\n");
  scanf("%d", &num);

  i = 1;
  while (i <= num)
  {
    if (i % 2 == 0)
    {
      printf("%d\n", i);
    }
    i++;
  }
  printf("Bye...\n");
}
