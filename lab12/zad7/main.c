#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car{
    char brand[20];
    int mileage;
};

struct Car initCar(char brand2[], int mileage2){
    struct Car temp;
    strcpy(temp.brand, brand2);
    temp.mileage = mileage2;
    return temp;
}

void showCar(struct Car arg){
    printf("%s %d\n", arg.brand, arg.mileage);
}

void mileageService(struct Car * wsk){
    wsk->mileage += 10000;
}

int main()
{
    struct Car c1 = initCar("Skoda", 2000);
    showCar(c1);
    mileageService(&c1);
    showCar(c1);
    return 0;
}
