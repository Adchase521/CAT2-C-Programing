//C Program to determine the hourlywage of a worker by entering the hoursworked.
/*
//C Program to determine the hourlywage of a worker.
Author: Adrian Mwangi 
Registration number:CT101/G/22872/24
Date: 6/11/2024
//preprocessor directive - scarf(),printf()
*/
#include <stdio.h>

int main() {
    float hoursworked;
    float hourlywage;
    float grosspay;
    float taxes;
    float netpay;

    //  Input data from user
    printf("Enter the hours worked in a week: ");
    scanf("%f", &hoursworked);
    
    printf("Enter your hourly wage: ");
    scanf("%f", &hourlywage);

    // Calculate the gross pay
    grosspay = hoursworked * hourlywage;

    // Calculate the taxes (15% of gross pay)
    taxes = 0.15 * grosspay;

    // Calculate the net pay
    netpay = grosspay - taxes;

    // Print the results
    printf("Gross Pay: $%.2f\n", grosspay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netpay);

    return 0;
}
