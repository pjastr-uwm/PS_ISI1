#include <stdio.h>
#include <stdlib.h>

void revCopy(int n, int * tab1, int * tab2){
    for(int i=0;i<n;i++){
        *(tab2+i) = *(tab1+n-1-i);
    }
}

void printTable(int n, int *tab){
    for(int i=0;i<n;i++){
        printf("%d ", *(tab+i));
    }
    printf("\n");
}

int main()
{
    int * tab1 = malloc(4*sizeof(int));
    *tab1 = 5;
    *(tab1+1) = -23;
    *(tab1+2) = 12;
    *(tab1+3) = 11;
    int * tab2 = malloc(4*sizeof(int));
    *tab2 = 52;
    *(tab2+1) = 78;
    *(tab2+2) = -22;
    *(tab2+3) = -23;
    printTable(4, tab1);
    printTable(4, tab2);
    revCopy(4, tab1, tab2);
    printf("After\n");
    printTable(4, tab1);
    printTable(4, tab2);
    return 0;
}
