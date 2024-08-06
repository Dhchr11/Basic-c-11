//8.3
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
    struct Employee employees[5];

    // Input details for five employees
    int i;
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        
        printf("Enter employee number: ");
        scanf("%d", &employees[i].empno);
        getchar(); // to consume the newline character after entering the number

        printf("Enter employee name: ");
        fgets(employees[i].empname, sizeof(employees[i].empname), stdin);
        employees[i].empname[strcspn(employees[i].empname, "\n")] = '\0'; // Remove the newline character

        printf("Enter employee address: ");
        fgets(employees[i].address, sizeof(employees[i].address), stdin);
        employees[i].address[strcspn(employees[i].address, "\n")] = '\0'; 

        printf("Enter employee age: ");
        scanf("%d", &employees[i].age);
        getchar(); // to consume the newline character after entering the age
    }

    
    printf("\nEmployee Details:\n");
    
    for (i = 0; i < 5; i++) 
	{
        printf("\nEmployee %d:\n", i + 1);
        displayEmployee(employees[i]);
    }

    return 0;
}

