#include <stdio.h>

int main() {
    // Bispo: 5 casas na diagonal superior direita
    int i = 1;

    while (i <= 5) //comando realizado
    {
        printf("%d\n", i); //impressao do movimento
        i++; //incremento para evitar loop infinito
        printf("Bispo andou direita cima\n"); //direcao do movimento
    }

    // Rainha: 8 casas para a esquerda
    i = 1;
    do {
        printf("%d\n", i); //saida de movimento rainha
        i++;
        printf("Rainha andou para esquerda \n"); //direcao do movimento
    }
    while (i <= 8);

    // Torre: 5 casas para a direita

    for (int i = 1; i <= 5; i++) //codigo da acao
    {
        printf("%d\n", i); //saida de movimento
        printf("Torre andou para a direita \n"); //direcao do movimento
    }

    return 0;
}