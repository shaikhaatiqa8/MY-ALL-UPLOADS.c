#include <stdio.h>

int main() {
    float arr[20];
    float *ptr = arr;
    
    // Initialize array with sample values
    for(int i = 0; i < 20; i++) {
        arr[i] = (i + 1) * 5.5;  // 5.5, 11.0, 16.5, ..., 110.0
    }
    
    // Make one value smaller for testing
    arr[15] = 25.0;
    
    printf("Array elements:\n");
    for(int i = 0; i < 20; i++) {
        printf("%.1f ", *(ptr + i));
        if ((i + 1) % 5 == 0) printf("\n");
    }
    
    // Find highest and second highest using pointers
    float highest = *ptr;
    float secondHighest = *ptr;
    
    for(int i = 1; i < 20; i++) {
        if (*(ptr + i) > highest) {
            secondHighest = highest;
            highest = *(ptr + i);
        } else if (*(ptr + i) > secondHighest && *(ptr + i) != highest) {
            secondHighest = *(ptr + i);
        }
    }
    
    printf("\nHighest value: %.1f\n", highest);
    printf("Second highest value: %.1f\n", secondHighest);
    
    // Test with different values
    float testArr[] = {45.5, 89.2, 23.1, 67.8, 89.2, 12.3, 90.1, 45.5, 90.1, 78.9};
    ptr = testArr;
    int testSize = 10;
    
    highest = *ptr;
    secondHighest = *ptr;
    
    for(int i = 1; i < testSize; i++) {
        if (*(ptr + i) > highest) {
            secondHighest = highest;
            highest = *(ptr + i);
        } else if (*(ptr + i) > secondHighest && *(ptr + i) != highest) {
            secondHighest = *(ptr + i);
        }
    }
    
    printf("\nTest with duplicate values:\n");
    printf("Highest: %.1f, Second Highest: %.1f\n", highest, secondHighest);
    
    return 0;
}
