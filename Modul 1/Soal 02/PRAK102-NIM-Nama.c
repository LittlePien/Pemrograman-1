#include <stdio.h>

int main(){
    float a = 4; //float untuk membuat bilangan decimal
    float b = 8;
    float c = 3;
    float hasil = a * b / c;

    printf("Variabel a bernilai %.0f\n", a); //%.0f membuat tidak memunculkan decimal
    printf("Variabel b bernilai %.0f\n", b);
    printf("Variabel c bernilai %.0f\n", c);
    printf("Hasil dari a dikali b dibagi c adalah %f\n", hasil);
}