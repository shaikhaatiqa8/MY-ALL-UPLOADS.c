#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CountFrequency(int array[], int size) {
    printf("Unique values and their occurrences:\n");
    
    for(int i = 0; i <= 10; i++) {
        int count = 0;
        for(int j = 0; j < size; j++) {
            if(array[j] == i) {
                count++;
            }
        }
        if(count > 0) {
            printf("%d appeared %d times\n", i, count);
        }
    }
}

int main() {
    int size;
    
    srand(time(0));
    
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int array1[size];
    
    // Generate random array
    for(int i = 0; i < size; i++) {
        array1[i] = rand() % 11;
    }
    
    printf("Generated array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");
    
    CountFrequency(array1, size);
    
    return 0;
}
