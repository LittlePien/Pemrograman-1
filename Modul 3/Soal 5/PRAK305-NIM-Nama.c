#include <stdio.h>

int main(){
    int sec;

    printf("Masukkan Detik: ");
    scanf("%d", &sec);

    int hari = sec / 86400;
    sec %= 86400;
    int jam = sec / 3600;
    sec %= 3600;
    int menit = sec / 60;
    sec %= 60;

    if (hari > 0){
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, sec);
    }
    else {
        printf("%02d:%02d:%02d\n", jam, menit, sec);
    }
}