//12. WAP to accept 5 students name and store it in array 
#include <stdio.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50

int main() {
    char students[MAX_STUDENTS][MAX_NAME_LENGTH];
    int i;

    // Input names of 5 students
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i], sizeof(students[i]), stdin);
        
        // Remove the newline character if present
        students[i][strcspn(students[i], "\n")] = '\0';
    }

    
    printf("\nStudent Names:\n");
    
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d: %s\n", i + 1, students[i]);
    }

    return 0;
}

