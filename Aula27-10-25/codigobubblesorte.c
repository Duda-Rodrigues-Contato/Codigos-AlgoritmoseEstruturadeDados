// Testando...

#include <stdio.h>

void bubbleSort(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        
        }

        printf("\n");

        for (int z = 0; z < n; z++) {
            printf("%d ", arr[z]);
        }
    
    }

}

int main() {

    int arr[] = {18, 2, 7, 33, 1, 5}; 
    int tam = 6;

    bubbleSort(arr, tam);

    printf("\nArray ordenado:");

    for(int i = 0; i < tam; i++)
        printf(" %d", arr[i]);

    return 0;

}