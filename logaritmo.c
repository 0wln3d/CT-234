/****************************************************************/
/*   Exemplo de algoritmo Logaritmico O(log n): busca bin�ria   */
/****************************************************************/

#include <stdio.h>

// Fun��o de busca bin�ria
int busca_binaria(int vetor[], int esquerda, int direita, int alvo) {
    while (esquerda <= direita) {  
        int meio = esquerda + (direita - esquerda) / 2;

		printf("\nEsquerda: %d\n", esquerda);
		printf("Direita: %d\n", direita);
		printf("Meio: %d\n", meio);

        // Se o elemento do meio for o alvo, retorna a posi��o
        if (vetor[meio] == alvo)
            return meio;

        // Se o alvo for menor, busca na metade esquerda
        if (vetor[meio] > alvo)
            direita = meio - 1;
        else
            esquerda = meio + 1; // Se for maior, busca na metade direita
    }

    return -1; // Retorna -1 se n�o encontrar
}

int main() {
	// Vetor com n�meros ordenados
	int numeros[] = {1, 3, 7, 15, 18, 21, 33, 42, 48, 55}; // Vetor ordenado
	// Verificar o tamanho do vetor e armazena em vari�vel
	int tamanho = sizeof(numeros) / sizeof(numeros[0]);
	// N�mero alvo
	int alvo = 7;

	// Chama a fun��o de busca bin�ria
	int resultado = busca_binaria(numeros, 0, tamanho - 1, alvo);

	if (resultado != -1)
		printf("\nN�mero alvo encontrado na posi��o %d\n", resultado);
	else
		printf("\nN�mero alvo n�o encontrado no vetor.\n");
	return 0;
}
