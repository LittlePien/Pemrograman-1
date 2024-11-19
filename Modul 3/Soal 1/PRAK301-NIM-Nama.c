#include <stdio.h>

int main(){
    int inp1, inp2, inp3;

    scanf("%d %d %d", &inp1, &inp2, &inp3);

    if (inp1 > inp2 && inp1 > inp3){
        if (inp2 > inp3) 
    printf("%d %d %d\n", inp3, inp2, inp1);
        else 
    printf("%d %d %d\n",inp2, inp3, inp1);
    }
    else if (inp2 > inp1 && inp2 > inp3){
        if (inp1 > inp3)
    printf("%d %d %d\n", inp3, inp1, inp2);
        else 
    printf("%d %d %d\n", inp1, inp3, inp2);
    }
    else {
        if (inp1 > inp2)
    printf("%d %d %d\n", inp2, inp1, inp3);
        else
    printf("%d %d %d\n", inp1, inp2, inp3);
    }
}