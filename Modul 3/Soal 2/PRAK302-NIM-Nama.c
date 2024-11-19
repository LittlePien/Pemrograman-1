#include <stdio.h>

int main(){
    int bil;
    printf("Masukkan Nilai Kalian ");
    scanf("%d", &bil);

    if(bil>=80){
        printf("Nilai Anda Adalah A");
    }
    else if(bil>=70){
        printf("Nilai Anda Adalah B");
    }
    else if(bil>=60){
        printf("Nilai Anda Adalah C");
    }
    else if(bil>=50){
        printf("Nilai Anda Adalah D");
    }
    else if(bil<50){
        printf("Nilai Anda Adalah E");
    }
}