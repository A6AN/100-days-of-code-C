//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

int main() {
    FILE *file;
    int n;
    char name[100];
    int roll, marks;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]", name);
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%d", &marks);
        
        fprintf(file, "%s %d %d\n", name, roll, marks);
    }
    
    fclose(file);
    
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("\n\nStudent Records:\n");
    printf("%-20s %-15s %-10s\n", "Name", "Roll Number", "Marks");
    printf("------------------------------------------------\n");
    
    while (fscanf(file, "%s %d %d", name, &roll, &marks) == 3) {
        printf("%-20s %-15d %-10d\n", name, roll, marks);
    }
    
    fclose(file);
    
    return 0;
}
