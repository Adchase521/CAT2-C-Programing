//C Program to enter an employee's details.
/*
//C Program for employee data entry
Author: Adrian Mwangi 
Registration number: CT101/G/22872/24
Date:6/11/2024
//preprocessor directive - scanf(),printf()
*/
#include <stdio.h>

// Define the structure
struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    // Declaration and initialization 
    struct Employee employee = {
        "John Doe",
        12345,
        "Human Resources",
        55000.50,
        "john.doe@company.com"
    };

    // Print the values of the fields
    printf("The Employee's Details:\n");
    printf("The Name: %s\n", employee.name);
    printf("The ID: %d\n", employee.id);
    printf("The Department: %s\n", employee.department);
    printf("Their Salary: %.2f\n", employee.salary);
    printf("Their Email: %s\n", employee.email);

    return 0;
}
