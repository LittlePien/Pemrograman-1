#include <stdio.h>
#include <math.h>

int main(){
    int putaran = 5;
    double jarak = 14.0;
    double keliling = jarak / putaran;
    double radius = keliling / (2 * M_PI);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putara\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", jarak);
    printf("\n");
    printf("Jawaban :\n");
    printf("jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", radius);
}