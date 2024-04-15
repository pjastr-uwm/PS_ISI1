#include <stdio.h>
#include <stdlib.h>

void rotateDoubles(double * x, double * y, double *z){
    double temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;
}

int main()
{
    double a=4.2, b=-3.4, c=6.2;
    printf("%lf %lf %lf\n", a,b,c);
    rotateDoubles(&a, &b, &c);
    printf("%lf %lf %lf\n", a,b,c);
    return 0;
}
