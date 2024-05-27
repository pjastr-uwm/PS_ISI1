#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tab[3][4] = {{1,-3,-4,5},{4,-2,1,-2},{0,3,-8,1}};
  int a=tab[1][-3]; //a=-3
  int b=tab[2][-2]; //a=-3  ,b=1
  a=b++; //a=1  ,b=2
  b-=a*3;  //a=1  ,b=-1
  a+=(b+=3)-7;  //a=-4  ,b=2
  b=**((tab)+2); //a=-4  ,b=0
  ++a; //a=-3  ,b=0
  return 0;
}
