/*
 * File name: a7f2.c
 * ------------------
 * Author: Christos Parapangidis
 * Date: 17 Oct 2022
 * This program calculates the weekly rate of an employee
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main() {
    // Declare variables
    long employeeCode;
    double annualRate, weeklyRate, hourlyRate;
    int weeklyWorkingHours;

    printf("Enter the employee's code number: ");
    employeeCode = GetLong();

    // Pay by year
    if (employeeCode >= 1000) {
        printf("Enter the employee's annual rate: ");
        annualRate = GetReal();

        weeklyRate = annualRate / 52;
    }
    // Pay by week
    else {
        printf("Enter the employee's working hours per week: ");
        weeklyWorkingHours = GetInteger();

        printf("Enter the employee's hourly rate: ");
        hourlyRate = GetReal();

        weeklyRate = weeklyWorkingHours * hourlyRate;

        // 50% bonus if the hours are more than 40
        if (weeklyWorkingHours > 40) {
            weeklyRate += ((weeklyWorkingHours - 40) * (hourlyRate * 0.5));
        }
    }
    printf("The employee's weekly rate is: %g\n", weeklyRate);

    return 0;
}
