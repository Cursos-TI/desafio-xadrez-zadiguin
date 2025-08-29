#include <stdio.h>

int main() {

    int torre;
    int bispo = 0;
    int rainha = 0;
    int cavalo = 0;

    // torre
    // mover a torre 5 casas para a direita
    printf("\n\n===TORRE===\n");
    for (torre = 0; torre < 5; torre++){
        printf("direita\n"); // imprime a direção do movimento
    }

    // bisco
    // mover o bispo 5 vezes para cima e direita
    printf("\n\n===BISPO===\n");
    while(bispo < 5){
        printf("cima, direita\n");
        bispo++;
    }
    

    // rainha
    //mover 8 vezes a rainha para esquerda
    printf("\n\n===RAINHA===\n");
    do{
        printf("esquerda\n");
        rainha++;
    } while (rainha < 8);


        // cavalo
    //mover 2 para baixo e 1 para esquerda
    printf("\n\n===CAVALO===\n");
    for (cavalo = 0; cavalo <= 2; cavalo++)
    {
        printf("baixo\n");
        cavalo++;
    }
        int esquerda = 0;

        while (esquerda < 1)
        {
          printf("esquerda\n");
          esquerda++;
        }


    return 0;
}
