#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * addFirst(struct element * lista, int a){
    struct element * wsk = malloc(sizeof(struct element));
    wsk->x = a;
    wsk->next = lista;
    return wsk;
}

void printListWithoutHead(struct element * lista){
    struct element * wsk = lista;
    while(wsk!=NULL){
        printf("%d\n", wsk->x);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->x = 4;
    lista->next = malloc(sizeof(struct element));
    lista->next->x = 5;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->x = -12;
    lista->next->next->next = NULL;
    printListWithoutHead(lista);
    lista = addFirst(lista, 20);
    printListWithoutHead(lista);
    return 0;
}
