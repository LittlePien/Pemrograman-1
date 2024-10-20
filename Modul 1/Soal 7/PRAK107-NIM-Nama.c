#include <stdio.h>

int main(){
    int s1 = 4;
    int s2 = 5;
    int s3 = 7;
    int harga = 85000;
    int kel = s1 + s2 + s3;
    int biaya = harga * kel;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah, %d, %d, dan %d\n", s1, s2, s3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", kel);
    printf("Harga tanah Per Meter adalah %d\n", harga);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", biaya);
}