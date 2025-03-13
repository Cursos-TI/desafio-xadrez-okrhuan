#include <stdio.h>

    // Movimentando peças do xadrez
    // Torre, Bispo, Rainha e Cavalo

int main(){
    
    //Torre usando FOR
    printf("Movimento da Torre:\n");
    for (int torre = 0; torre < 5; torre++){
        printf("Direita\n"); //Mostra a direção do movimento
    }
    
    printf("\n"); // Pra n ficar grudado

    //Bispo usando WHILE
    printf("Movimento do Bispo:\n");
    int bispo = 1;
    while (bispo <= 5){
        printf("Cima Direita\n");
        bispo++;
    }
    
    printf("\n"); // Pra n ficar grudado

    //Rainha usando DO WHILE
    printf("Movimento da Rainha:\n");
    int rainha = 1;
    do{
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);
    
    printf("\n"); // Pra n ficar grudado

    
    int cavalov = 4, cavaloh = 4;
    int cavalobaixo = 0;

    // move o cavbalo para baixo
    printf("Movimento do Cavalo:\n");
    while (cavalobaixo < 2){  // -> Vai controlar quantos mov o cavalo fez pra vbaixo
        cavalov++;            // -> Vai repetir 2 vezes fazendo andar 2 pra baixo
        printf("Baixo\n");
        cavalobaixo++;
    }

    for (int k = 0; k < 1; k++)
    {
     cavaloh--;               // -> Vai mover uma casa pra esquerda e vai ser repetir uma vez ja q k =0 e vai virar k=1 fechadno o codigo
     printf("Esquerda\n");
    }
    
    printf("\n"); // Pra n ficar grudado

    printf("Todos os movimentos feitos com sucesso!\n");

    return 0;
}

