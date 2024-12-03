#include <stdio.h>

int main(){
    int first, second;

    printf("");
    scanf("%d %d", &first, &second);

    for (int i = first, j = second; i <= second && j >= first; i++, j--){
        printf("%d %d", i, j);
        if(i < second || j > first){
            printf(" - ");
        }
    }

    for (int i = first, j = second; i >= second && j <= first; i--, j++){
        printf("%d %d", i, j);
        if (i > second || j < first){
            printf(" - ");
        }
    } 
}