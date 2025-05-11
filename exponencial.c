/********************************************************************************/
/*   Exemplo de algoritmo exponencial O(k^n): Sequência de Fibonacci recursiva  */
/********************************************************************************/

#include <stdio.h>

// Função que retorna a soma do número anterior com o atual (Fibonacci recursiva)
int fibonacci(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int tamanho, i;

    printf("Digite o tamanho da sequência de Fibonacci: ");
    scanf("%d", &tamanho);

	printf("\nSequência de Fibonacci para o tamanho digitado: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", fibonacci(i));
    }
    
    printf("\n");
    return 0;
}
