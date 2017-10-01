#include <stdio.h>

int append_five(int *arr)
{
  arr[4] = 5;
  return *arr;
}

int main()
{
  int array[5];

  append_five(array);

  printf("%d\n", array[4]);
}
