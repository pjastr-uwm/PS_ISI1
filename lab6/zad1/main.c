#include <stdio.h>
#include <stdlib.h>

void findMaxValue(int numbers[], int size){
    int max = numbers[0];
    for(int i=1;i<size;i++){
        if (max < numbers[i]){
            max = numbers[i];
        }
    }
    printf("%d\n", max);
}

int main()
{
    int tab[] = {4,-5,6,-22,45};
    findMaxValue(tab, 5);
    return 0;
}
