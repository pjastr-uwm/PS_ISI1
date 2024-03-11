#include <stdio.h>
#include <stdlib.h>

double findMax(const double * num1, double * const num2){
    if (*num1 >=*num2){
        return *num1;
    }
    return *num2;
}

int main()
{
    double a = 5553.2, b = 11.8;
    printf("%lf\n", findMax(&a, &b));
    return 0;
}
