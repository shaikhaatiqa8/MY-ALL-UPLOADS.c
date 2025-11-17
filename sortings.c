#include <stdio.h>

void SortFunction(int *arr, int size, int order) {
    int i, j, temp;
    
    for(i = 0; i < size - 1; i++) {
        for(j = 0; j < size - i - 1; j++) {
            if(order == 1) { // Ascending order
                if(*(arr + j) > *(arr + j + 1)) {
                    temp = *(arr + j);
                    *(arr + j) = *(arr + j + 1);
                    *(arr + j + 1) = temp;
                }
            } else if(order == 2) { // Descending order
                if(*(arr + j) < *(arr + j + 1)) {
                    temp = *(arr + j);
                    *(arr + j) = *(arr + j + 1);
                    *(arr + j + 1) = temp;
                }
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 5, 77, 42};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;
    
    printf("Original array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Sort in ascending order
    SortFunction(arr, size, 1);
    printf("Ascending order: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Sort in descending order
    SortFunction(arr, size, 2);
    printf("Descending order: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
