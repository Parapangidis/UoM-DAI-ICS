/*
 * File name: a4f1.c
 * ------------------
 * Author: Christos Parapangidis, with direction from Alexandros Chatzigeorgiou
 * Date: 10 Oct 2022
 * This program calculates the profit of a sell
 */

#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

int main () {
    // Declare variables
    long purchaseAmount;
    int rate;
    double profit, saleAmount;

    printf("Enter the net value (purchase amount):");
    purchaseAmount = GetLong();

    printf("Enter the percentage of the seller's profit:");
    rate = GetInteger();

    profit = purchaseAmount * ((double) rate / 100);
    printf("The seller's profit is: %g \n", profit);

    saleAmount = purchaseAmount + profit;
    printf("The received amount is: %g", saleAmount);

    return 0;
}
