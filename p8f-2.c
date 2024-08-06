//8.2
#include <stdio.h>

// Define the employee structure
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

// Function to display employee information
void displayEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Employee Address: %s\n", emp.address);
    printf("Employee Age: %d\n", emp.age);
}

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter employee number: ");
    scanf("%d", &emp.empno);
    getchar(); // to consume the newline character after entering the number

    printf("Enter employee name: ");
    fgets(emp.empname, sizeof(emp.empname), stdin);
    emp.empname[strcspn(emp.empname, "\n")] = '\0'; // Remove the newline character

    printf("Enter employee address: ");
    fgets(emp.address, sizeof(emp.address), stdin);
    emp.address[strcspn(emp.address, "\n")] = '\0'; // Remove the newline character

    printf("Enter employee age: ");
    scanf("%d", &emp.age);

    // Display employee details
    displayEmployee(emp);

    return 0;
}

