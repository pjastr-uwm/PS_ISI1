#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char*model;
    int number_of_engines;
} Airplane;

int min_engines(Airplane tab[], int n){
    int temp = tab[0].number_of_engines;
    for(int i=1;i<n;i++){
        if(temp > tab[i].number_of_engines){
            temp = tab[i].number_of_engines;
        }
    }
    return temp;
}

int main()
{
    Airplane tab[] = {
        {"TR34", 2},
        {"A303", 4},
        {"EN23", 3}
    };
    printf("%d\n", min_engines(tab, 3));
    return 0;
}
