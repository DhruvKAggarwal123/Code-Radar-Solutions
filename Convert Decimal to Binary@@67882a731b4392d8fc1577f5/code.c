#include <stdio.h>

int main() {
    int a ;
    scanf("%d" , &a);
    for (int i = 31 , i >= 0 ; i--){
        printf("%d", (a >> 1) & 1);
    }
    printf("\n", );
    return 0;
}