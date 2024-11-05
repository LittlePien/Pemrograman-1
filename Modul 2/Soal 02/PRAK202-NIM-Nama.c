#include <stdio.h>

int main() {
    double first, second, result;

    printf("Masukkan Nilai Pertama : ");
    scanf("%lf", &first);
    printf("Masukkan Nilai Kedua : ");
    scanf("%lf", &second);

    result = first + second;

    printf("Hasil dari penjumlahan nilai pertama \"%.2lf\" dan nilai kedua \"%.1lf\" adalah \"%.2lf\"", first, second, result);
}