#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float const Pi=3.1415;
int main()
{
  float x1,y1,z1,x2,y2,z2,r,S,P,Pir,Area,a,b,c,n;
  printf("radius\n");
  scanf("%f",&r);
  printf("PointTr\n");
  scanf("%f",&x1);
  scanf("%f",&x2);
  scanf("%f",&y1);
  scanf("%f",&y2);
  scanf("%f",&z1);
  scanf("%f",&z2);
  P=2*Pi*r;
  S=Pi*2*2;
  a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
  b=sqrt(pow(y2-y1,2)+pow(z2-z1,2));
  c=sqrt(pow(z2-z1,2)+pow(x2-x1,2));
  Pir=a+b+c;
  n=Pir/2;
  Area=sqrt(n*(n-a)*(n-b)*(n-c));
  printf ("perimeter_cir=%f\n",P);
  printf ("area_cir=%f\n",S);
  printf ("perimeter_tr=%f\n",Pir);
  printf ("area_tr=%f\n",Area);
  return 0;
}
