#include <stdio.h>
#include <stdlib.h>

int minIdxMax(int n, int tab[]){
    int index = 0;
    for(int i=0;i<n;i++){
        if (tab[index] >= tab[i]){
            index = i;
        }
    }
    return index;
}

int main()
{
    int tab[] = {-20,5,-8,9,-20,9,3,5};
    printf("%d\n", minIdxMax(8, tab));
    return 0;
}
