#include <stdio.h>

int main() {
    printf("=== FACTORIAL CALCULATOR ===\n");
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Error: Negative numbers are not allowed. Exiting program.\n");
        return 0;
    }
    
    long long factorial = 1;
    
    if (num == 0 || num == 1) {
        factorial = 1;
    } else {
        printf("Calculation: %d", num);
        for (int i = num; i > 0; i--) {
            factorial *= i;
            if (i != 1) {
                printf("*%d", i-1);
            }
        }
        printf("\n");
    }
    
    printf("Factorial of %d is = %lld\n", num, factorial);
    
    return 0;
}
