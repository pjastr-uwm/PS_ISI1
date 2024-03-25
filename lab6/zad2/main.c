#include <stdio.h>
#include <stdlib.h>

float average(int n, int tab[]){
    float sum =0;
    for(int i=0;i<n; i++){
        sum += tab[i];
    }
    return sum/n;
}

int main()
{
    int tab[]= {4,5,-8};
    printf("%f\n", average(3, tab));
    return 0;
}
