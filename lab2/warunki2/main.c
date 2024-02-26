#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a>b){
        printf("Wieksza liczba to %d\n", a);
    }
    else if (a<b){
        printf("Wieksza liczba to %d\n", b);
    }
    else{
        printf("liczby sa rowne");
    }
    return 0;
}
