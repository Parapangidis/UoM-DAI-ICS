/*
 * File name: a5f4.c
 * ------------------
 * Author: Christos Parapangidis, with direction from Alexandros Chatzigeorgiou
 * Date: 07 Nov 2022
 * This program calculates the Armstrong numbers between 1-999
 */

#include <stdio.h>
#include "genlib.h"

// Declare functions
int Cube(int number);
int Sum_Cube(int number);
bool IsArmstrong(int number);

int main() {
    //Declare variables
    int i;

    for (i=1; i<1000; i++) {
        if (IsArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

int Cube(int number) {
    //Declare variables
    int i, result;

    //Initialize variables
    result = 1;

    for (i=0; i<3; i++) {
        result *= number;
    }

    return result;
}

int Sum_Cube(int number) {
    //Declare variables
    int digit, sum;

    //Initialize variables
    sum = 0;

    //Retrieve digits and calculate the sum of the raised to the third digits
    while (number > 0) {
        digit = number % 10;
        sum += Cube(digit);
        number /= 10;
    }

    return sum;
}

bool IsArmstrong(int number) {
    //Declare variables
    int sum;

    sum = Sum_Cube(number);

    //Directly return TRUE or FALSE
    return sum == number;
}
