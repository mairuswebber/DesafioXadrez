#include <stdio.h>

void torre(int numt) {
    if (numt > 0) {
        printf("Direita\n");
        torre(numt - 1);
    }
}
void bispo(int numb) {
    if (numb > 0) {
        printf("Cima Direita\n");
        bispo(numb - 1);
    }
}
void rainha(int numr) {
    if (numr > 0) {
        printf("Esquerda\n");
        rainha(numr - 1);
    }
}

int main(){

    char peca;
    int cavaloV = 1;
    int cavaloH = 1;

    printf("Escolha qual peça você deseja mover. Torre [T], Bispo [B], Rainha [R] ou Cavalo [C]: ");
    scanf(" %c", &peca);
    switch (peca) { 
    case 'T': // case para torre usando recursividade
    case 't':
        int movtorre = 5;
        printf("Movimento da torre\n");
        torre(movtorre);
    break;
    case 'B':  // case para bispo usando do-while
    case 'b':
    printf("Movimento do bispo:\n");
        int movbispo = 5;
        printf("Movimento do bispo\n");
        bispo(movbispo);
    break;
    case 'R': //case para rainha usando for
    case 'r':
    printf("Movimento da rainha:\n");
        int movrainha = 8;
        printf("Movimento da rainha\n");
        rainha(movrainha);
    break;
    case 'C': //case para cavalo usando loops aninhados de for e while
    case 'c':
    printf("Movimento do cavalo:\n");
    for (cavaloH; cavaloH <= 1; cavaloH++) {
        for (cavaloV; cavaloV <= 2; cavaloV++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }
    break;
    default: 
    printf("Opção inválida.\n");
    }
	return 0;
}