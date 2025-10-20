#include <stdio.h>

int main(){

    char peca; //variavel para escolher qual peça mover
    int torre = 1;
    int bispo = 1;
    int rainha = 1;

    printf("Desafio Jogo de Xadrez\n======================\n\n");
    printf("Escolha qual peça você deseja mover. Torre [T], Bispo [B] ou Rainha [R]: ");
    scanf(" %c", &peca);
    switch (peca) {
    case 'T': // case para o movimento da torre, usando While.
    case 't':
    printf("Movimento da torre:\n");
    while (torre <= 5) {
        printf("Direita\n");
        torre++;
    }
    break;
    case 'B': // case para o movimento do bispo, usando Do-While.
    case 'b':
    printf("Movimento do bispo:\n");
    do {
        printf("Cima Direita\n");
        bispo++;
    } while (bispo <= 5);
    break;
    case 'R': // case para o movimento da rainha, usando For.
    case 'r':
    for (rainha; rainha <= 8; rainha++) {
        printf("Esquerda\n");
    }
    break;
    default: 
    printf("Opção inválida.\n");
    }
	return 0;
}