#include <stdio.h>
#include <stdlib.h>

float quadFuncVal(float*a, float*b, float*c, float*x){
    float y = *a * *x * *x +*b * *x + *c;
    return y;
}

int main()
{
    float a=1, b=2, c=2, x=1;
    printf("%f\n", quadFuncVal(&a, &b, &c, &x));
    return 0;
}
