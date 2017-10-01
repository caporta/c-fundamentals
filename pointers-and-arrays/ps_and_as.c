#include <stdio.h>

int main()
{
  int values[5] = { 0 };
  values[0] = 1;
  values[4] = values[0] + 6;
  int * first = values;
  int * last = &values[4];

  printf("first: %d, last: %d\n", *first, *last);

  return 0;
}
