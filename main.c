#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float const Pi=3.1415
int main()
{
  float x,y,r,S,P;
  scanf("%f",&x);
  scanf("%f",&y);
  scanf("%f",&r);
  P=2*Pi*r;
  S=Pi*2*2;
  printf ("perimeter=%f\n",P);
  printf ("area=%f\n",S);
  return 0;
}
