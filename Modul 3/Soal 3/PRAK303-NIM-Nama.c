#include <stdio.h>

int main(){
    int inp;

    printf("Input: ");
    scanf("%d", &inp);

    if (inp > 0){
        printf("Positif");
    }
    else if (inp < 0){
        printf("Negatif");
    }
    else printf("Nol");
}