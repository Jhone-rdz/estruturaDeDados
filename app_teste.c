#include <stdio.h>
#include <C:\Users\User\Documents\Jhone\estrutura de dados\biblioteca.h>

int main() {
    int vetor[50]; // Declara um vetor para testar as funções.
    int tamanhoAtual = 0; // Tamanho atual do vetor (inicialmente vazio).

    // Teste da função inserirElemento para adicionar elementos ao vetor.
    inserirElemento(vetor, &tamanhoAtual, 2, 0); // Insere 2 na posição 0.
    inserirElemento(vetor, &tamanhoAtual, 3, 1); // Insere 3 na posição 1.
    inserirElemento(vetor, &tamanhoAtual, 4, 1); // Insere 4 na posição 1.

    // Teste da função imprimirVetor para fazer o processo de travessia do vetor.
    printf("Vetor: ");
    imprimirVetor(vetor, tamanhoAtual);

    // Teste da função buscarElemento para encontrar a posição de um elemento.
    int elementoBuscado = 3;
    int posicao = buscarElemento(vetor, tamanhoAtual, elementoBuscado);
    if (posicao != -1) {
        printf("O elemento %d foi encontrado na posição %d.\n", elementoBuscado, posicao);
    } else {
        printf("O elemento %d não foi encontrado no vetor.\n", elementoBuscado);
    }

    // Teste da função excluirElemento para remover um elemento do vetor.
    int elementoExcluir = 2;
    if (excluirElemento(vetor, &tamanhoAtual, elementoExcluir)) {
        printf("O elemento %d foi excluído com sucesso.\n", elementoExcluir);
    } else {
        printf("Falha ao excluir o elemento %d.\n", elementoExcluir);
    }

    // Imprime o vetor após a exclusão.
    printf("Vetor após a exclusão: ");
    imprimirVetor(vetor, tamanhoAtual);

    return 0;
}
