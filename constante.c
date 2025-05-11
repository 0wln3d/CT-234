/*******************************************************************/
/*   Exemplo de algoritmo Constante O(1): primeira posição vetor   */
/*******************************************************************/

#include <stdio.h>

// Função que retorna primeiro vetor
int retorna_primeira_posicao(int vetor[]) {
	// Sempre retorna o primeiro elemento do vetor
	return vetor[0]; 
}

int main() {
	// Vetor com uma lista de números
	int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	// Chama a função para retornar o primeiro vetor
	printf("Primeiro elemento: %d\n", retorna_primeira_posicao(numeros));

	return 0;
}
