#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Computer{
    char manufacturer[30];
    int usage_hours;
};

int length(char txt[]){
    int i=0;
    while(txt[i]!=0){
        i++;
    }
    return i;
}

struct Computer * initComputer(char manufacturer2[], int usage_hours2){
    if (length(manufacturer2)<2 || usage_hours2<=0){
        return NULL;
    }
    struct Computer * temp = malloc(sizeof(struct Computer));
    strcpy(temp->manufacturer, manufacturer2);
    temp->usage_hours = usage_hours2;
    return temp;
};

void increaseUsage(struct Computer * wsk){
    wsk->usage_hours +=100;
}

int main()
{
    struct Computer *c1 = initComputer("ASUS", -300);
    if (c1 !=NULL){
        printf("%s %d\n", c1->manufacturer, c1->usage_hours);
        increaseUsage(c1);
        printf("%s %d\n", c1->manufacturer, c1->usage_hours);
    }
    return 0;
}
