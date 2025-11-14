#include <stdio.h>
#include <string.h>
struct Employee {
    int employeeID;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[3];
    
    printf("Employee Record System =\n\n");
    
    
    for(int i = 0; i < 3; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        
        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);
        
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name); 
        
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        
        printf("\n");
    }
    
    //
    printf("\n Employee Details\n");
    printf("| Employee ID | Name                 | Salary      |\n");
    printf("\n");
    
    for(int i = 0; i < 3; i++) {
        printf("| %-11d | %-20s | $%-10.2f |\n", 
               employees[i].employeeID, 
               employees[i].name, 
               employees[i].salary);
    }
    
    return 0;
}
