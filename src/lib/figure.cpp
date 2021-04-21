#include "figure.h"

float per_cir (float r)
{
  float P_c;
  P_c=2*M_PI*r;
  return P_c;
}
float area_cir (float r)
{
  float S_c ;
    S_c=M_PI*r*r;
    return S_c;
}
float per_tri (float x1,float y1,float x2 ,float y2,float x3,float y3)
{
  float a, b, c ,P_tr;
  a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
  b=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
  c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
  P_tr=a+b+c;
  return P_tr;
}
float area_tri (float x1,float y1,float x2 ,float y2,float x3,float y3)
{
  float a, b, c ,P_tr,n,S_tr
  a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
  b=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
  c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
  P_tr=a+b+c;
  n=P_tr/2;
  S_tr=sqrt(n*(n-a)*(n-b)*(n-c));
  return S_tr;
}
