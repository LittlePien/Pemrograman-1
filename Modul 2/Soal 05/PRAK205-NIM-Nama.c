#include <stdio.h>
#include <math.h>

int main() {
    float A, B;
    double C, keliling, luas;

    printf("");
    scanf("%f %f", &A, &B);

    C = sqrt((B * B) - (A * A));
    keliling = A + B + C;
    luas = (A * C / 2);

    printf("Alas = %.0f cm\n", C);
    printf("Tinggi = %.0f cm\n", A);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);

    return 0;
}