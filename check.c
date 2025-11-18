#include <stdio.h>

int main(void) {
    int *p1;
    char *p2;
    
    printf(" Pointer Type Compatibility Analysis \n");
    printf("Declaration: int *p1; char *p2;\n\n");
    
    printf("Attempting: p2 = p1;\n");
    printf("This assignment will generate a WARNING during compilation.\n\n");
    
    printf("Reason: Incompatible pointer types\n");
    printf("- p1 is pointer to int (int*)\n");
    printf("- p2 is pointer to char (char*)\n\n");
    
    printf("Why this is problematic:\n");
    printf("1. Different data sizes: int is typically 4 bytes, char is 1 byte\n");
    printf("2. Different memory alignment requirements\n");
    printf("3. Dereferencing would access wrong amount of memory\n");
    printf("4. Violates type safety rules in C\n\n");
    
    return 0;
}
