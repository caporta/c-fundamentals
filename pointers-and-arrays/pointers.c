#include <stdio.h>

int main() {
  // int * p     //bad!!!
  int * p = 0;   //good!!!
  int plus_six = *p + 6;

  printf("%d", plus_six);

  return 0;
}
