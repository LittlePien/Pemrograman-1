#include <stdio.h>

int main(){
    int pasukan, pahlawan, hasil;

    printf("Jumlah pasukan yang dibawa Yu Zhong = ");
    scanf("%d", &pasukan);
    printf("Jumlah pahlawan = ");
    scanf("%d", &pahlawan);

    hasil = pasukan / pahlawan;

    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", hasil);
}
