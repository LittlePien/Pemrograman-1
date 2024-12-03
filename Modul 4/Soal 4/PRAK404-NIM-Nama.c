#include <stdio.h>

int main(){

    int list;
    float first, second, result;

    while (1){
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        printf("Masukkan pilihan : ");
        scanf("%d", &list);

        if (list == 5){
            printf("Terimakasih, telah menggunakan kalkulator A. MALIK FAJAR PUTRA SYAMSI");
            break;
        }

        if (list < 1 || list > 5){
            printf("Input Anda salah, silahkan coba lagi\n");
            continue;
        }
            switch(list){
                case 1:
                    printf("Masukkan nilai pertama : ");
                    scanf("%f", &first);
                    printf("Masukkan nilai kedua : ");
                    scanf("%f", &second);
                    result = first + second;
                    printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", first, second, result);
                    break;

                case 2:
                    printf("Masukkan nilai pertama : ");
                    scanf("%f", &first);
                    printf("Masukkan nilai kedua : ");
                    scanf("%f", &second);
                    result = first - second;
                    printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", first, second, result);
                    break;

                case 3:
                    printf("Masukkan nilai pertama : ");
                    scanf("%f", &first);
                    printf("Masukkan nilai kedua : ");
                    scanf("%f", &second);
                    result = first * second;
                    printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", first, second, result);
                    break;

                case 4:
                    printf("Masukkan nilai pertama : ");
                    scanf("%f", &first);
                    printf("Masukkan nilai kedua : ");
                    scanf("%f", &second);
                    result = first / second;
                    printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", first, second, result);
                    break;
                default:

                    break;
            }
    }
}