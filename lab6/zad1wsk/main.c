#include <stdio.h>
#include <stdlib.h>

void findMaxValue(int *numbers, int size){
    int max = *numbers;
    for(int i=1;i<size;i++){
        if (max < *(numbers+i)){
            max = *(numbers+i);
        }
    }
    printf("%d\n", max);
}

int main()
{
    int *tab= malloc(5*sizeof(int));
    *tab = 4;
    *(tab+1) =-5;
    *(tab+2) =6;
    *(tab+3) =-22;
    *(tab+4) =45;
    findMaxValue(tab, 5);
    free(tab);
    return 0;
}
