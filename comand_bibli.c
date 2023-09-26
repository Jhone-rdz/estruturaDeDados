#include <C:\Users\User\Documents\Jhone\estrutura de dados\biblioteca.h>
#include <stdio.h>

void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int buscarElemento(int vetor[], int tamanho, int elemento) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == elemento) {
            return i;
        }
    }
    return -1;
}

void inserirElemento(int vetor[], int *tamanho, int elemento, int posicao) {
    if (posicao < 0 || posicao > *tamanho) {
        printf("Posição de inserção inválida.\n");
        return;
    }
    
    for (int i = *tamanho; i > posicao; i--) {
        vetor[i] = vetor[i - 1];
    }
    
    vetor[posicao] = elemento;
    (*tamanho)++;
}

int excluirElemento(int vetor[], int *tamanho, int elemento) {
    int posicao = buscarElemento(vetor, *tamanho, elemento);
    if (posicao == -1) {
        printf("Elemento não encontrado.\n");
        return 0;
    }
    
    for (int i = posicao; i < *tamanho - 1; i++) {
        vetor[i] = vetor[i + 1];
    }
    
    (*tamanho)--;
    return 1;
}
