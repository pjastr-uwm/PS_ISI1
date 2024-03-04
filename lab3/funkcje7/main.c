#include <stdio.h>
#include <stdlib.h>

int calculateSquareRootFloor(int n){
    int i;
    while(i*i<=n){
        i++;
    }
    return i-1;
}

int main()
{
    printf("%d\n", calculateSquareRootFloor(0));
    printf("%d\n", calculateSquareRootFloor(1));
    printf("%d\n", calculateSquareRootFloor(2));
    printf("%d\n", calculateSquareRootFloor(25));
    printf("%d\n", calculateSquareRootFloor(50));
    return 0;
}
