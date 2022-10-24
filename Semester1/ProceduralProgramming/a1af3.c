/*
 * File name: a1af3.c
 * ------------------
 * Author: Christos Parapangidis
 * Date: 24 Oct 2022
 * This program calculates the years it will take for a specific amount of cars to surpass 160000
 */

#include <math.h>
#include <stdio.h>

// Define constants per instructions
#define INCREASING_RATE 0.07
#define LIMIT 160000

int main() {
    // Declare variables
    long yearsForCompletion, carsAmount;

    // Initialize variables
    yearsForCompletion = 0;
    carsAmount = 80000;

    while (carsAmount <= LIMIT) {
        carsAmount = ceil(carsAmount * (1 + INCREASING_RATE)); //as per instructions
        yearsForCompletion++;
    }

    printf("The years it took for the cars to surpass %d are: %ld\n", LIMIT, yearsForCompletion);
    printf("The final amount of cars is: %ld\n", carsAmount);

    return 0;
}
