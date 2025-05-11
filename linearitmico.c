/***************************************************************/
/*   Exemplo de algoritmo linearítmico O(n logn): Merge Sort   */
/***************************************************************/

#include <stdio.h>

// Função para mesclar duas partes ordenadas do array
void merge(int arr[], int esquerda, int meio, int direita) {
    int i, j, k;
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[esquerda + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[meio + 1 + j];

    i = 0;
    j = 0;
    k = esquerda;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Função Merge Sort recursiva
void mergeSort(int arr[], int esquerda, int direita) {
    if (esquerda < direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        mergeSort(arr, esquerda, meio);
        mergeSort(arr, meio + 1, direita);
        merge(arr, esquerda, meio, direita);
    }
}

// Função para imprimir o array
void imprimirArray(int arr[], int tamanho) {
    int i;
	for (i = 0; i < tamanho; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("Array antes da ordenação:\n");
    imprimirArray(arr, tamanho);

    mergeSort(arr, 0, tamanho - 1);

    printf("Array após Merge Sort:\n");
    imprimirArray(arr, tamanho);

    return 0;
}

