#include <stdio.h>
#include <stdlib.h>

int lexComp(char txt1[], char txt2[]){
    int i;
    for(i=0; txt1[i] !=0 && txt2[i] !=0;i++){
        if (txt1[i] > txt2[i])
            return 0;
        if (txt1[i] < txt2[i])
            return 1;
    }
    if (txt1[i] !=0 && txt2[i] ==0){
        return 0;
    }
    if (txt2[i] !=0 && txt1[i] ==0)
        return 1;
    return 0;
}

int main()
{
    printf("%d\n", lexComp("", "")); //0
    printf("%d\n", lexComp("", "a")); //1
    printf("%d\n", lexComp("a", "")); //0
    printf("%d\n", lexComp("AB", "AD")); //1
    printf("%d\n", lexComp("Ab", "KLM")); //1
    printf("%d\n", lexComp("AB", "ABC")); //1
    printf("%d\n", lexComp("ABC", "AB")); //0
    printf("%d\n", lexComp("abc", "ABC")); //0
    printf("%d\n", lexComp("AB", "AB")); //0
    return 0;
}
