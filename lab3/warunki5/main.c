#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rok;
    scanf("%d", &rok);
    if (rok %4 ==0 && rok%100 !=0){
        printf("Rok przestepny\n");
    }
    else if (rok %400 ==0){
        printf("Rok przestepny\n");
    }
    else{
        printf("Rok nie jest przestepny\n");
    }
    return 0;
}
