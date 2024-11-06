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
    struct employee emp = {
        "John Doe",
        12345,
        "Human Resources",
        55000.50,
        "john.doe@company.com"
    };

    // Print the values of the fields
    printf("The Employee's Details:\n");
    printf("The Name: %s\n", emp.name);
    printf("The ID: %d\n", emp.id);
    printf("The Department: %s\n", emp.department);
    printf("Their Salary: %.2f\n", emp.salary);
    printf("Their Email: %s\n", emp.email);

    return 0;
}
