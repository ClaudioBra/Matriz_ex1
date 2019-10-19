#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[9];
    int b[9];
    int i;
    int x = 0;

        for(i = 0; i <=9; i++){

        scanf("%d", &x);

        a[i] = x;

        if(x%2==0){
        printf("%d\n", a[i] * 5);
        }
         else{
        printf("%d\n", a[i] + 5);
        }
        }
    return 0;
}
