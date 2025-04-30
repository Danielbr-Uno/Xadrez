#include <stdio.h>

void moverTorre(int casas){
    if(casas > 0){
    printf("Direita.\n");
    moverTorre(casas - 1);
    }
}

void moverRainha(int casas){
    if(casas > 0){
    printf("Esquerda.\n");
    moverRainha(casas - 1);
    }
}

void moverBispo(int casas){
    int b = 1;
    while(b <= casas){
        int B;
        printf("Cima.\n");
        b++;
        for(B = casas; B >= casas; B--){
            printf("Direita.\n");
        }
    }
}

void moverCavalo(){
    int c = 1;
    do{
        for(int C = 1; C < 3; C++){
            printf("Cima.\n");
        }
        printf("Direita.\n");
        c++;
    } while(c < 2);
}

int main(){

    moverTorre(5);
    printf("\n");
    moverRainha(8);
    printf("\n");
    moverBispo(5);
    printf("\n");
    moverCavalo();

    return 0;
}












/*
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
    */