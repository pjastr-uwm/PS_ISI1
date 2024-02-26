#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%.20f\n", (0.1+0.2)+0.3);
    printf("%.20f\n", 0.1+(0.2+0.3));
    printf("%d\n", ((0.1+0.2)+0.3) == (0.1+(0.2+0.3)));
    return 0;
}
