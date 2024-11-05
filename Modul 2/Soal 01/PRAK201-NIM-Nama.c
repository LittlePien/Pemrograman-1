#include <stdio.h>

int main() {
    char name[50], class[50], TTL[50], alamat[50], hobby[50], HP[50];
    int NIM;

    printf("Nama                    : ");
    fgets(name, sizeof(name), stdin);
    printf("NIM                     : ");
    scanf("%d", &NIM);
    getchar();
    printf("Kelas Paralel           : ");
    fgets(class, sizeof(class), stdin);
    printf("Tempat/Tanggal Lahir    : ");
    fgets(TTL, sizeof(TTL), stdin);
    printf("Alamat                  : ");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby                   : ");
    fgets(hobby, sizeof(hobby), stdin);
    printf("No. HP                  : ");
    fgets(HP, sizeof(HP), stdin);

    printf("Nama                    : %s", name);
    printf("NIM                     : %d\n", NIM);
    printf("Kelas Paralel           : %s", class);
    printf("Tempat/Tanggal Lahir    : %s", TTL);
    printf("Alamat                  : %s", alamat);
    printf("Hobby                   : %s", hobby);
    printf("No. HP                  : %s", HP);
}