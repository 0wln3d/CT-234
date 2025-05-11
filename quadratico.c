/**************************************************************/
/*   Exemplo de algoritmo quadr�tico O(n�): imprimir matriz   */
/**************************************************************/

#include <stdio.h>

// Tamanho da matriz
#define LINHAS 3
#define COLUNAS 3

// Fun��o que imprime a matriz
int imprime_matriz(int matriz[LINHAS][COLUNAS]) {
	int i;
	int j;
	
	printf("\nMatriz digitada �: \n");
	
	// Imprime a matriz
	for(i=0; i<LINHAS; i++){		
		for(j=0; j<COLUNAS; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}

int main() {	
	int i;
	int j;
	
	// Gera uma matriz
	int matriz[LINHAS][COLUNAS];
	
	// Recebe os valores da matriz pelo usu�rio
	for(i=0; i<LINHAS; i++){
	    for(j=0; j<COLUNAS; j++){
      		printf ("Linha %d e coluna %d: ", i, j);
      		scanf ("%d", &matriz[i][j]);
      	}	
    }
		
	// Chama a fun��o para imprimir a matriz
	imprime_matriz(matriz);
	
	return 0;
}
