#include <stdio.h>

int maks(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int mins(int a, int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int batas = 0;
    int max = -100000;
    int min = 100000;
    int bilangan;

    scanf("%d", &bilangan);

    while(batas < bilangan){
        int nilai;

        scanf("%d", &nilai);

        max = maks(max, nilai);
        min = mins(min, nilai);

        batas++;
    }
    printf("%d %d", max, min);
}