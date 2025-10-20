#include <stdio.h>

int main(){

    char peca; // variavel para a escolha de qual peça mover
    int torre = 1; //variavel para repetição do movimento da torre
    int bispo = 1; //variavel para repetição do movimento do bispo
    int rainha = 1; //variavel para repetição do movimento da rainha
    int cavaloV = 1; //variavel para repetição do movimento vertical do cavalo
    int cavaloH = 1; //variavel para repetição do movimento horizontal do cavalo

    printf("Escolha qual peça você deseja mover. Torre [T], Bispo [B], Rainha [R] ou Cavalo [C]: ");
    scanf(" %c", &peca);
    switch (peca) { 
    case 'T': // case para torre usando while
    case 't':
    printf("Movimento da torre:\n");
    while (torre <= 5) {
        printf("Direita\n");
        torre++;
    }
    break;
    case 'B':  // case para bispo usando do-while
    case 'b':
    printf("Movimento do bispo:\n");
    do {
        printf("Cima Direita\n");
        bispo++;
    } while (bispo <= 5);
    break;
    case 'R': //case para rainha usando for
    case 'r':
    printf("Movimento da rainha:\n");
    for (rainha; rainha <= 8; rainha++) { 
        printf("Esquerda\n");
    }
    break;
    case 'C': //case para cavalo usando loops aninhados de for e while
    case 'c':
    printf("Movimento do cavalo:\n");
    for (cavaloH; cavaloH <= 1; cavaloH++) {
        while (cavaloV <= 2) {
            printf("Baixo\n");
            cavaloV++;
        }
        printf("Esquerda\n");
    }
    break;
    default: 
    printf("Opção inválida.\n");
    }
	return 0;
}