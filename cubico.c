/*************************************************************/
/*   Exemplo de algoritmo cúbico O(n³): imprimir matriz 3D   */
/*************************************************************/

#include <stdio.h>

// Tamanho da matriz 3D
#define TAM 3

// Função que imprime a matriz 3D
int imprime_matriz(int matriz[TAM][TAM][TAM]) {
	int i;
	int j;
	int k;
	
	printf("\nMatriz digitada é: \n");
	
	// Imprime a matriz
	for(i=0; i<TAM; i++){
	    for(j=0; j<TAM; j++){
	    	for(k=0; k<TAM; k++){			
      			printf("%d ", matriz[i][j][k]);
      		}
      		printf("\n");
      	}
      	printf("\n");
    }
	
	return 0;
}

int main() {	
	int i;
	int j;
	int k;
	
	// Gera uma matriz 3D
	int matriz[TAM][TAM][TAM];
	
	// Recebe os valores da matriz pelo usuário
	for(i=0; i<TAM; i++){
	    for(j=0; j<TAM; j++){
	    	for(k=0; k<TAM; k++){			
      			printf ("Posição %d %d %d: ", i, j, k);
      			scanf ("%d", &matriz[i][j][k]);
      		}
      	}	
    }
		
	// Chama a função para imprimir a matriz
	imprime_matriz(matriz);
	
	return 0;
}
