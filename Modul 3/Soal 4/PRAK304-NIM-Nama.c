#include <stdio.h>

int main(){
    int inp;

    printf("Input: ");
    scanf("%d", &inp);

    if (inp == 0){
        printf("Nol");
    }
    else if (inp >= 1 && inp <= 9){
        printf("Satuan");
    }
    else if (inp == 10){
        printf("Puluhan");
    }
    else if (inp >= 11 && inp <= 19){
        printf("Belasan");
    }
    else if (inp >= 20 && inp <= 99){
        printf("Puluhan");
    }
    else printf("Anda Menginput Melebihi Limit Bilangan");
}