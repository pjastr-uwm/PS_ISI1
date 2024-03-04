#include <stdio.h>
#include <stdlib.h>

int calculateFibonacciRecursively(int n){
    if (n==0)
        return 0;
    if (n==1)
        return 1;
    return calculateFibonacciRecursively(n-2)+calculateFibonacciRecursively(n-1);
}

int main()
{
    printf("%d\n", calculateFibonacciRecursively(0));
    printf("%d\n", calculateFibonacciRecursively(1));
    printf("%d\n", calculateFibonacciRecursively(2));
    printf("%d\n", calculateFibonacciRecursively(3));
    printf("%d\n", calculateFibonacciRecursively(4));
    printf("%d\n", calculateFibonacciRecursively(5));
    printf("%d\n", calculateFibonacciRecursively(6));
    printf("%d\n", calculateFibonacciRecursively(7));
    printf("%d\n", calculateFibonacciRecursively(8));
    return 0;
}
