#include <stdio.h>

int main() {
    int a[10];
    int i;
    
    // Fill array with squares using array syntax
    for(i = 0; i < 10; i++) {
        a[i] = i * i;
    }
    
    printf("Array filled with squares:\n");
    printf("Using array syntax a[i]: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    printf("Using pointer syntax *(a + i): ");
    for(i = 0; i < 10; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n");
    
    printf("\nDetailed breakdown:\n");
    printf("Index\tValue\tCalculation\n");
    for(i = 0; i < 10; i++) {
        printf("%d\t%d\t%d * %d = %d\n", i, *(a + i), i, i, i*i);
    }
    
    return 0;
}
