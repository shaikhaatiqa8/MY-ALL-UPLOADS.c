#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char rollNumber[20];
    float marks[3];
    float average;
};

int main()
{
    struct Student students[3];
    float highestAverage = 0;
    int topStudentIndex = 0;
    
    printf(" Student Marks and Average System \n\n");

    for(int i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        
        printf("Roll Number: ");
        scanf(" %[^\n]", students[i].rollNumber);
        
        printf("Enter marks for 3 subjects:\n");
        float total = 0;
        for(int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
            total += students[i].marks[j];
        }

        students[i].average = total / 3.0;
        if(students[i].average > highestAverage) {
            highestAverage = students[i].average;
            topStudentIndex = i;
        }
        
        printf("\n");
    }
    printf("\nStudent Details and Averages\n");
    printf("| Roll     | Name                 | Subject 1  | Subject 2  | Subject 3  | Average    |\n");
    
    for(int i = 0; i < 3; i++) {
        printf("| %-8s | %-20s | %-10.2f | %-10.2f | %-10.2f | %-10.2f |\n", 
               students[i].rollNumber,
               students[i].name,
               students[i].marks[0],
               students[i].marks[1], 
               students[i].marks[2],
               students[i].average);
    }
    printf("\n Bonus Challenge Result \n");
    printf("Student with Highest Average Marks:\n");
    printf("Name: %s\n", students[topStudentIndex].name);
    printf("Roll Number: %s\n", students[topStudentIndex].rollNumber);
    printf("Average Marks: %.2f\n", students[topStudentIndex].average);
    
    return 0;
}
