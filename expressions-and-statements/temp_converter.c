#include <stdio.h>

//"if not defined" preprocessor directive
//conditionally includes typedef if not using c++ compiler
#ifndef __cplusplus
typedef char bool;
#define true 1
#define false 0
#endif

int main()
{
  bool c2f = false;
  double c = 0;
  double f = 86;

  if (c2f) {
    f = c * 9/5 + 32;
  } else {
    c = (f - 32) * 5/9;
  }

  // %f == floating point, %d == int
  printf("%f° Celsius == %f° Farenheit\n", c, f);

  return 0;
}
