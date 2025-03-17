#include <stdio.h>

// mover a torre
void moverTorre(int torre) {
    if (torre == 0) return;
    printf("Direita\n");
    moverTorre(torre - 1);
}

// mover o bispo
void moverBispoRecursivo(int bispo) {
    if (bispo == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(bispo - 1);
}

// mover o bispo com loop
void moverBispoLoop(int bispo) {
    for (int i = 0; i < bispo; i++) {
        printf("Cima Direita\n");
    }
}

// mover a Rainha
void moverRainha(int rainha) {
    if (rainha == 0) return;
    printf("Esquerda\n");
    moverRainha(rainha - 1);
}

// mover o cavalo pra cima e pra direita
void moverCavalo(int cavalov, int cavaloh) {
    int cavalobaixo = 0;

    // indo para cima (loop while)
    while (cavalobaixo < 2) {
        cavalov++; // subidno
        printf("Cima\n");
        cavalobaixo++;
    }

    // se movendo uma vez para a direita (loop for)
    for (int k = 0; k < 1; k++) {
        cavaloh--; // indo pra direita
        printf("Direita\n");
    }
}

int main() {
    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    // movimento da torre (recursivo)
    printf("Movimento da Torre:\n");
    moverTorre(torre);
    printf("\n"); // pra n ficar grudado

    // movimento do Bispo (recursivo)
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(bispo);
    printf("\n"); // pra n ficar grudado

    // movimento do Bispo (loops aninhado)
    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoLoop(bispo);
    printf("\n"); // pra n ficar grudado

    // movimento da Rainha (recursivo)
    printf("Movimento da Rainha:\n");
    moverRainha(rainha);
    printf("\n"); // pra n ficar grudado

    // movimento do Cavalo (loops aninhado)
    printf("Movimento do Cavalo:\n");
    moverCavalo(4, 4);
    printf("\n"); // pra n ficar grudado

    printf("Todos os movimentos feitos com sucesso!\n");

    return 0;
}
