#include <stdio.h>

void multiply(int n, int MatxA[][n], int MatxB[][n], int result[][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            result[i][j] = 0;
            for(int k = 0; k < n; k++){
                result[i][j] += MatxA[i][k] * MatxB[k][j];
            }
        }
    }
}

int main(){
    int n;
    
    scanf("%d", &n);

    int MatxA[n][n], MatxB[n][n], result[n][n];

    printf("Matriks A\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &MatxA[i][j]);
        }
    }

    printf("Matriks B\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &MatxB[i][j]);
        }
    }

    multiply(n, MatxA, MatxB, result);

    printf("Matriks AXB\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}