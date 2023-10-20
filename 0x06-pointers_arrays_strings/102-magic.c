#include <stdio.h>

int main(void)
{
  int n;
  int arr[5];
  int *p;

  arr[2] = 1024;
  p = &n;

  *(p + 5) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
