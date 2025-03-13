#include <stdio.h>

    // Movimentando peças do xadrez
    // Torre, Bispo e Rainha

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

    printf("Todos os movimentos feitos com sucesso!\n");

    return 0;
}