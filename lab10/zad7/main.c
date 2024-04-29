#include <stdio.h>
#include <stdlib.h>

void swapElems(int n, int m, int tab1[n][m], int tab2[n][m]){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = temp;
        }
    }
}

void printTable(int n, int m, int tab[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int tab1[3][4] = {{3,4,-5,9}};
    int tab2[3][4] = {{3,2,0,2},{3,-7,1,2},{9,8,7,2}};
    printTable(3,4,tab1);
    printTable(3,4,tab2);
    swapElems(3,4,tab1, tab2);
    printTable(3,4,tab1);
    printTable(3,4,tab2);
    return 0;
}
