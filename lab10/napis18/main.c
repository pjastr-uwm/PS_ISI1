#include <stdio.h>
#include <stdlib.h>

int length(char * napis){
    int i=0;
    while(napis[i] !=0){
        i++;
    }
    return i;
}

char* copyEveryThird(char *napis){
    int n = length(napis);
    int size = n/3 + (n%3>0 ? 1 : 0) + 1;
    char * wsk = malloc(size * sizeof(char));
    int i=0,j=0;
    while(napis[i] !=0 && i< n){
        wsk[j]= napis[i];
        j++;
        i+=3;
    }
    wsk[j] = 0;
    return wsk;

}

int main()
{
    printf("%s\n",copyEveryThird("ABCXYZ"));
    printf("%s\n",copyEveryThird("ABCXY"));
    printf("%s\n",copyEveryThird("ABCX"));
    printf("%s\n",copyEveryThird("ABC"));
    printf("%s\n",copyEveryThird("AB"));
    printf("%s\n",copyEveryThird("A"));
    printf("%s\n",copyEveryThird(""));
    return 0;
}
