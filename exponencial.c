/********************************************************************************/
/*   Exemplo de algoritmo exponencial O(k^n): Sequ�ncia de Fibonacci recursiva  */
/********************************************************************************/

#include <stdio.h>

// Fun��o que retorna a soma do n�mero anterior com o atual (Fibonacci recursiva)
int fibonacci(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int tamanho, i;

    printf("Digite o tamanho da sequ�ncia de Fibonacci: ");
    scanf("%d", &tamanho);

	printf("\nSequ�ncia de Fibonacci para o tamanho digitado: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", fibonacci(i));
    }
    
    printf("\n");
    return 0;
}
