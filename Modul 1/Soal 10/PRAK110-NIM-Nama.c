#include <stdio.h>
#include <math.h>

int main(){
    int A = 12, B, C = 5, Keliling, Luas;
    B = (int) sqrt(pow(A, 2) + pow(C, 2));
    Keliling = A + B + C;
    Luas = (A * C) / 2;

    printf("Diketahui : \n");
    printf("Alas = %d cm\n", C);
    printf("Tinggi = %d cm\n", A);
    
    printf("\n");

    printf("Jawab : \n");
    printf("Sisi A = %d cm\n", A);
    printf("Sisi B = %d cm\n", B);
    printf("Sisi C = %d cm\n", C);
    printf("Keliling = %d cm\n", Keliling);
    printf("Luas = %d cm\n", Luas);
}