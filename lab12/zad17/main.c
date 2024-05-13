#include <stdio.h>
#include <stdlib.h>

enum Month {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int days_in_month(enum Month arg){
    if (arg == FEB){
        return 28;
    }
    if (arg == JAN || arg ==MAR || arg == MAY || arg == JUL ||
        arg == AUG || arg == OCT || arg == DEC){
            return 31;
        }
    return 30;
}

int main()
{
    enum Month m1 = AUG;
    printf("%d\n", m1);
    printf("%d\n", days_in_month(m1));
    return 0;
}
