#include <stdio.h>

int main() {
    printf("=== FIBONACCI SERIES UP TO 1000 ===\n");
    
    int a = 1, b = 2, next;
    int sum = 0;
    
    printf("Fibonacci Series: ");
    printf("%d %d ", a, b);
    
    // Add first two numbers to sum if they meet criteria
    if (a % 3 == 0 || a % 5 == 0 || a % 7 == 0) {
        sum += a;
    }
    if (b % 3 == 0 || b % 5 == 0 || b % 7 == 0) {
        sum += b;
    }
    
    // Generate Fibonacci series using while loop
    while (1) {
        next = a + b;
        if (next > 1000) {
            break;
        }
        
        printf("%d ", next);
        
        // Check if divisible by 3, 5, or 7 and add to sum
        if (next % 3 == 0 || next % 5 == 0 || next % 7 == 0) {
            sum += next;
        }
        
        a = b;
        b = next;
    }
    
    printf("\nSum of numbers divisible by 3, 5, or 7: %d\n", sum);
    
    return 0;
}
