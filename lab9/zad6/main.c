#include <stdio.h>
#include <stdlib.h>

void toLowerNew(char txt[]){
    int i=0;
    while(txt[i] != 0){
        if ('A' <= txt[i] && txt[i] <= 'Z'){
            //txt[i] += 32;
            txt[i] += ('a' - 'A');
        }
        i++;
    }
}

int main()
{
    char n1[] = "ABXxyz23";
    toLowerNew(n1);
    printf("%s\n", n1);
    return 0;
}
