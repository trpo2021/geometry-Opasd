#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  double x1,y1,x2,y2,perimetr,dlina;
  scanf ("%lf ,%lf ,%lf ,%lf",&x1 , &y1 , &x2 , &y2);
  dlina = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
  perimetr = 2*3.14*dlina;
  printf ("%lf",perimetr);
  return 0;
}
