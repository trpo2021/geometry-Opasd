#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "figure.h"

float const Pi=3.1415;
int main()
{
  float x1,y1,x2,y2,x3,y3,r,S,P,Pir,Area,a,b,c,n,cen1,cen2,colvo1,colvo2;
  do
    {
      printf ("colvo_circle=");
      scanf("%f",&colvo1);
  if (colvo1<=0)
    printf ("err_colvo<=0\n");
    }
  while (colvo1<=0);

  do
    {
  printf ("colvo_triangle=");
  scanf("%f",&colvo2);
  if (colvo2<=0)
    printf ("err_colvo<=0\n");
      }
  while (colvo2<=0);
  do
    {
      printf ("circle=");
      scanf ("%f %f %f",&cen1,&cen2,&r);
      printf ("percir=%f\n",per_cir(r));
      printf ("areacir=%f\n",area_cir(r));
      colvo1--;
    }
  while (colvo1!=0);

  do
    {
      printf ("triangle=");
      scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
      printf ("perimeter_tr=%f\n",per_tri(x1,y1,x2,y2,x3,y3));
      printf ("area_tr=%f\n",area_tri(x1,y1,x2,y2,x3,y3));
      colvo2--;
    }
  while (colvo2!=0);
  return 0;
}
