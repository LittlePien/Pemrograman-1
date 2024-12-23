#include <stdio.h>
#include <string.h>

int main(){
    char code[100], message[100];
    int star = 0, hash = 0;

    fgets(code, sizeof(code), stdin);
    fgets(message, sizeof(message), stdin);

    code[strcspn(code, "\n")] = '\0';
    message[strcspn(message, "\n")] = '\0';

    if(strlen(code) != strlen(message)){
        printf("Panjang Kalimat berbeda, pesan palsu");
        return 0;
    }

    int panjang = strlen(code);
    for(int i = 0; i < panjang; i++){
        if(code[i] == ' ' && message[i] == ' '){
            continue;
        }

        if(code[i] == message[i]){
            printf("*");
            star++;
        }

        else{
            printf("#");
            hash++;
        }
    }

    printf("\n* = %d", star);
    printf("\n# = %d \n", hash);

    if(star >= hash){
        printf("Pesan Asli \n");
    }
    
    else{
        printf("Pesan Palsu \n");
    }
}