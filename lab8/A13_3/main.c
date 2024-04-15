#include <stdio.h>
#include <stdlib.h>

int * init(){
    int * wsk = malloc(4*sizeof(int));
    *wsk     = 5;
    *(wsk+1) = 2;
    *(wsk+2) = -3;
    *(wsk+3) = -5;
    return wsk+3;
}

int main()
{
    int * res = init();
    printf("%d\n", *res);
    printf("%d\n", *(res-1));
    printf("%d\n", *(res-2));
    printf("%d\n", *(res-3));
    return 0;
}
