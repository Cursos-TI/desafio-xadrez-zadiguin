#include <stdio.h>

//recursiva para mover a torre (direita)
void mover_torre(int casas) {
    if (casas > 0) {
        printf("direita\n");
        mover_torre(casas - 1);
    }
}

void mover_bispo(int casas) {
    if (casas > 0) {
        for (int i = 0; i < 1; i++) {
            printf("cima, direita\n");
        }
        mover_bispo(casas - 1);
    }
}

void mover_rainha(int casas) {
    if (casas > 0) {
        printf("esquerda\n");
        mover_rainha(casas - 1);
    }
}

int main() {

    // torre
    // mover a torre 5 casas para a direita
    printf("\n\n===TORRE===\n");
    mover_torre(5);
    
    
    // bispo
    // mover o bispo 5 vezes para cima e direita
    printf("\n\n===BISPO===\n");
    mover_bispo(5);


    // rainha
    //mover 8 vezes a rainha para esquerda
    printf("\n\n===RAINHA===\n");
    mover_rainha(8);


    // cavalo
    //mover 2 para baixo e 1 para esquerda
    printf("\n\n===CAVALO===\n");
    for (int cavalo = 0; cavalo < 2; cavalo++)
    {
        printf("cima\n");
    if (cavalo == 1) 
    {
        int direita = 0;
        while (direita < 1) 
        {
            printf("direita\n");
            direita++;
        }
    }
    }


    return 0;
}
