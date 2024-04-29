#include <stdio.h>
#include <stdlib.h>

int isDigitNew(char znak){
    if ('0' <= znak && znak <='9')
        return 1;
    return 0;
}

void rmDigits(char txt[]){
    int i=0,j=0;
    while(txt[i] !=0){
        if (!isDigitNew(txt[i])){
            txt[j] = txt[i];
            j++;
        }
        i++;
    }
    txt[j] = 0;
}

int main()
{
    char n1[] = "A3b4!";
    printf("%s\n", n1);
    rmDigits(n1);
    printf("%s\n", n1);
    char n2[] = "A3sswed!";
    printf("%s\n", n2);
    rmDigits(n2);
    printf("%s\n", n2);
    char n3[] = "6768";
    printf("%s\n", n3);
    rmDigits(n3);
    printf("%s\n", n3);
    return 0;
}
