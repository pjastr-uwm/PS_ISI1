#include <stdio.h>
#include <stdlib.h>

double subPtrs(double const * num1, double * const num2){
    return *num1 - *num2;
}

int main()
{
    double a = 4.5, b = 7.2;
    printf("%lf\n", subPtrs(&a, &b));
    return 0;
}
