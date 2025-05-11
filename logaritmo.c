/****************************************************************/
/*   Exemplo de algoritmo Logaritmico O(log n): busca binária   */
/****************************************************************/

#include <stdio.h>

// Função de busca binária
int busca_binaria(int vetor[], int esquerda, int direita, int alvo) {
    while (esquerda <= direita) {  
        int meio = esquerda + (direita - esquerda) / 2;

		printf("\nEsquerda: %d\n", esquerda);
		printf("Direita: %d\n", direita);
		printf("Meio: %d\n", meio);

        // Se o elemento do meio for o alvo, retorna a posição
        if (vetor[meio] == alvo)
            return meio;

        // Se o alvo for menor, busca na metade esquerda
        if (vetor[meio] > alvo)
            direita = meio - 1;
        else
            esquerda = meio + 1; // Se for maior, busca na metade direita
    }

    return -1; // Retorna -1 se não encontrar
}

int main() {
	// Vetor com números ordenados
	int numeros[] = {1, 3, 7, 15, 18, 21, 33, 42, 48, 55}; // Vetor ordenado
	// Verificar o tamanho do vetor e armazena em variável
	int tamanho = sizeof(numeros) / sizeof(numeros[0]);
	// Número alvo
	int alvo = 7;

	// Chama a função de busca binária
	int resultado = busca_binaria(numeros, 0, tamanho - 1, alvo);

	if (resultado != -1)
		printf("\nNúmero alvo encontrado na posição %d\n", resultado);
	else
		printf("\nNúmero alvo não encontrado no vetor.\n");
	return 0;
}
