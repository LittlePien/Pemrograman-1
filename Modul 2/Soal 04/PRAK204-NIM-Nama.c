#include <stdio.h>
#include <math.h>

int main(){
    float jr, t, v, l, k;

    printf("");
    scanf("%f %f", &jr, &t);

    v = 22.0 * jr * jr * t / 7.0;
    l = 2 * 22.0 * jr * (jr + t) / 7.0;
    k = 2 * 22.0 * jr / 7.0;
    
    printf("Volume = %.2f\n", v);
    printf("Luas = %.2f\n", l);
    printf("Keliling = %.2f\n", k);
    return 0;
}