#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = -9;
    printf("%d\n", a%2);
    if (a%2 != 0){
        printf("Liczba nieparzysta\n");
    }
    else{
        printf("liczba parzysta\n");
    }
    int x = 5;
    if (x){
        printf("prawda");
    }
    else{
        printf("falsz");
    }
    return 0;
}
