#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->x = 4;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->x = 5;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->x = -12;
    lista->next->next->next->next = NULL;
    return 0;
}
