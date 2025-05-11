/***********************************************************/
/*    Exemplo de algoritmo Linear O(n): busca sequencial   */
/***********************************************************/

#include <stdio.h>

// Função que faz a busca sequencial do maior número em um vetor
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
	// Gera um vetor com números não ordenados maiores que 0
	int numeros[] = {8, 2, 5, 50, 40, 11, 17, 6, 33, 15};
	// Verificar o tamanho do vetor e armazena em variável
	int tamanho = sizeof(numeros) / sizeof(numeros[0]);
	
	// Chama a função para verificar o maior número
	int maior_numero = busca_sequencial(numeros,tamanho);
	
	printf("Maior número encontrado: %d",maior_numero);
	
	return 0;
}
