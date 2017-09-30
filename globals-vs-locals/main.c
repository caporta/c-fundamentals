#include <stdio.h>

void apples_set(int value);
int apples_get();

void oranges_set(int value);
int oranges_get();

int main()
{
  apples_set(5);
  oranges_set(10);

  printf("apples=%d\n, oranges=%d\n", apples_get(), oranges_get());

  return 0;
}
