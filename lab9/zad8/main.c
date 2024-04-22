#include <stdio.h>
#include <stdlib.h>

void strCopyNew(char txt1[], char txt2[]){
    int i=0;
    while(txt1[i] !=0){
        txt2[i] = txt1[i];
        i++;
    }
    txt2[i] = 0;
}

int main()
{
    char n1[] = "Olsztyn";
    char n2[] = "informatyka";
    printf("%s %s\n", n1, n2);
    strCopyNew(n1, n2);
    printf("%s %s\n", n1, n2);
    char n3[20];
    strCopyNew(n1, n3);
    printf("%s %s\n", n1, n3);
    return 0;
}
