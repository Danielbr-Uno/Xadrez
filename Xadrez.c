#include <stdio.h>

int main(){

    int r = -1, b = 1, c = 1;

    printf("Movimento da torre: \n");
    for(int t = 1; t <=5; t++){
        printf("%d. Direita.\n", t);
    }

    printf("Movimento da rainha: \n");
    while(r >= -8){
        printf("%d. Esquerda.\n", r);
        r--;
    }

    printf("Movimento do bispo: \n");
    do{
        printf("%d. Cima-Direita \n", b);
        b++;
    }while(b <= 5);

    printf("\n");

    printf("Movimento do cavalo: \n");
    while(c--){

        for(int C = 1; C <= 2; C++){
            printf("Baixo.\n");
        }
        printf("Esquerda.\n");
    }

    return 0;
}