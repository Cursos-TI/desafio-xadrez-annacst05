#include <stdio.h>

//recusividade TORRE:
void moverTorre(int casas1) {
    if (casas1 > 0) 
    {
        printf("Direita\n");
        moverTorre(casas1 -1);
    }
}
//recursividade BISPO:
void moverBispo(int casas2, int passos) {
    if (casas2 > 0 && passos > 0)
    {
        printf("Cima\n");
        printf("Direita\n");
        moverBispo(casas2 -1, passos -1);
    }
    
}

// loop BISPO:
void moverBispoLoop(int casas3) {
    for (int vertical = 0; vertical < casas3; vertical++)
    {
        for (int horizontal = 0; horizontal < 1; horizontal++)
        {
            printf("cima, direira\n");

        }
        
    }
    
}
//recursividade RAINHA:
void moverRainha(int casas4) {
    if (casas4 > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas4 -1);
    }
    
}

//recursividade CAVALO:
void moverCavalo(int mover) {
    for (int i = 0; i < mover; i+= (1 % 2 == 0) ? 1 : 2)
    {
        printf("Cima\n");
        printf("Cima\n");
        printf("Direita\n");
    }
    
    
}

//MAIN
int main() {
    //TORRE
    printf("Movimento da Torre: 5 casas para a direita\n");
    moverTorre(5);
    printf("\n");

    //BISPO
    printf("Movimento do Bispo: 5 casas a diagonal direita\n");
    moverBispo(5, 5);
    printf("\n");

    //RAINHA
    printf("Movimento da Rainha: 8 casas para a esquerda\n");
    moverRainha(8);
    printf("\n");

    //CAVALO
    printf("Movimento do Cavalo: 2 casas para baixo e 1 casa para a esquerda\n");
    moverCavalo(1);
    printf("\n");
    
    return 0;
}
        
