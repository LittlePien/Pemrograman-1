#include <stdio.h>

int main(){
    float a = 9;
    float b = 6;
    float x = 10;
    float y = 7;
    float hasil = (a + b) * x / y;

    printf("Variabel a bernilai %.0f\n", a);
    printf("Variabel b bernilai %.0f\n", b);
    printf("Variabel x bernilai %.0f\n", x);
    printf("Variabel y bernilai %.0f\n", y);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", hasil);
    //%.2f membuat decimal yang ditunjukkan maks 2 angka setelah koma
}