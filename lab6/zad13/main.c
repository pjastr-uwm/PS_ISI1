#include <stdio.h>
#include <stdlib.h>

int* shiftLeft(int n, int tab[]){
    int * temp = malloc(n*sizeof(int));
    for(int i=0;i<n-1;i++){
        *(temp+i) = tab[i+1];
    }
    *(temp+n-1) = tab[0];
    return temp;
}

int main()
{
    int tablica[] = {3,-3,-6,11,22};
    int * wynik = shiftLeft(5, tablica);
    for(int i=0;i<5;i++){
        printf("%d ", *(wynik+i));
    }
    return 0;
}
