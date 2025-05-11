/***********************************************************/
/*    Exemplo de algoritmo Linear O(n): busca sequencial   */
/***********************************************************/

#include <stdio.h>

// Fun��o que faz a busca sequencial do maior n�mero em um vetor
int busca_sequencial(int vetor[], int tamanho) {
	int maior = 0;
	int i;
	
	// Realiza a busca sequencial
	for(i=0; i<tamanho; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}
	}
	
	// Retorna o maior valor
	return maior;
}

int main() {
	// Gera um vetor com n�meros n�o ordenados maiores que 0
	int numeros[] = {8, 2, 5, 50, 40, 11, 17, 6, 33, 15};
	// Verificar o tamanho do vetor e armazena em vari�vel
	int tamanho = sizeof(numeros) / sizeof(numeros[0]);
	
	// Chama a fun��o para verificar o maior n�mero
	int maior_numero = busca_sequencial(numeros,tamanho);
	
	printf("Maior n�mero encontrado: %d",maior_numero);
	
	return 0;
}
