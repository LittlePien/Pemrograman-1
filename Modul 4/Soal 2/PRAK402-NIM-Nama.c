#include <stdio.h>

int main(){
    int max;

    printf("");
    scanf("%d", &max);

    for (int i = 1; i <= max; i += 2){
        printf("%d ", i);
    }
    printf("\n");

    for (int i = max; i >= 2; i--){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
}