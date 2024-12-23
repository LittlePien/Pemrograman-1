#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int angka[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &angka[i]); 
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", angka[i] * (i + 1));
    }
}