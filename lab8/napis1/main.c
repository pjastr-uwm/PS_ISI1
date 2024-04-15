#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length(char*napis){
    int counter =0;
    for(int i=0; napis[i] !='\0' ;i++){
        counter++;
    }
    return counter;
}

int length2(char*napis){
    int counter =0;
    for(int i=0; napis[i] !=0 ;i++){
        counter++;
    }
    return counter;
}

int length3(char*napis){
    int i =0;
    while(napis[i] != 0){
        i++;
    }
    return i;
}

int length4(char*napis){
    int i =0;
    while(*(napis+i) != 0){
        i++;
    }
    return i;
}

int length5(char*napis){
    int i =0;
    while(*(napis+i)){
        i++;
    }
    return i;
}

int length6(char *napis){
    if (napis[0] == 0)
        return 0;
    return 1+length6(++napis);
}

int length7(char *napis){
    if (!*napis)
        return 0;
    return 1+length7(++napis);
}

int main()
{
    printf("%d\n", length("Olsztyn"));
    printf("%d\n", strlen("Olsztyn"));
    printf("%d\n", length2("Olsztyn"));
    printf("%d\n", length3("Olsztyn"));
    printf("%d\n", length4("Olsztyn"));
    printf("%d\n", length5("Olsztyn"));
    printf("%d\n", length6("Olsztyn"));
    printf("%d\n", length7("Olsztyn"));
    return 0;
}
