#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Podaj liczbe n\n");
    int n;
    scanf("%d", &n);
    int prev, curr, next;
    printf("Podaj elementy ciagu:\n");
    scanf("%d", &prev);
    scanf("%d", & curr);
    int counter =0;
    for(int i=3; i<=n;i++){
        scanf("%d", &next);
        if (curr < (prev+next)/ 2.0){
            counter++;
        }
        prev = curr;
        curr = next;
    }
    printf("%d\n", counter);
    return 0;
}
