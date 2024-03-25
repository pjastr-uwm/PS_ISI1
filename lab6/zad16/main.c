#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    return *a-*b;
}

int main()
{
    int tab[] = {1,5,5,2,3,3,-4,-4,0,1};
    int *wsk=tab-1;
    int b = *(wsk+=4); //b=2
    int c = b+3; // b=2  , c=5
    int d = foo(&b,&c); // b=2  , c=5  , d=-3
    int e = (wsk+=-1)[4]; // b=2  , c=5  , d=-3  , e=-4
    e = (d -= 2) - (c += 2); // b=2  , c=7  , d=-5  , e=-12
    c = d + (b+=4); // b=6  , c=1  , d=-5  , e=-12
    e= (--c)-(d++);  // b=6  , c=0  , d=-4  , e=5
    b = *wsk + e; // b=10  , c=0  , d=-4  , e=5
    return 0;
}
