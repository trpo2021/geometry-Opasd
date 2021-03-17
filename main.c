#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float const Pi=3.1415;
int main()
{
  
  float x1,y1,x2,y2,x3,y3,r,S,P,Pir,Area,a,b,c,n,cen1,cen2,colvo1,colvo2;

  printf ("colvo_circle=");
  scanf("%f",&colvo1);
  printf ("colvo_triangle=");
  scanf("%f",&colvo2);

  do
    {
      P=0;
      S=0;
      printf ("circle=");
      scanf ("%f %f %f",&cen1,&cen2,&r);
      P=2*Pi*r;
      S=Pi*r*r;
      printf ("perimeter_cir=%f\n",P);
      printf ("area_cir=%f\n",S);
      colvo1--;
    }
  while (colvo1!=0);

  do
    {
      Pir=0;
      Area=0;
      a=0;b=0;c=0;
      printf ("triangle=");
      scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
      a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
      b=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
      c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
      Pir=a+b+c;
      n=Pir/2;
      Area=sqrt(n*(n-a)*(n-b)*(n-c));
      printf ("perimeter_tr=%f\n",Pir);
      printf ("area_tr=%f\n",Area);
      colvo2--;
    }
  while (colvo2!=0);
  return 0;
}
