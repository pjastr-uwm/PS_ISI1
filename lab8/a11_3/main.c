#include <stdio.h>
#include <stdlib.h>

double* findMinPtr(double const * num1, double * const num2){
    if (*num1 > *num2){
        return num2;
    }
    return num1;
}

int main()
{
    double a = 4.3, b =-7.9;
    printf("%lf\n", * findMinPtr(&a, &b));
    return 0;
}
