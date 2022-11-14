/*
 * File name: a28f4.c
 * ------------------
 * Author: Christos Parapangidis, with direction from Alexandros Chatzigeorgiou
 * Date: 14 Nov 2022
 * This program calculates the discount percentage of a product and points a client gets based on the product's code number
 */

#include <math.h>
#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

// Declare functions
int get_code();
double discount_percentage(int code);
int product_points(int code, double price);

int main() {
    //Declare variables
    int productCode, productPoints, totalPoints;
    double productPrice, productDiscount, totalPrice, totalDiscount;

    //Initialize variables
    totalPrice = totalDiscount = totalPoints = 0;

    do {
        productCode = get_code();

        if (productCode > 0) {
            printf("Enter the product price: ");
            productPrice = GetReal();

            // Calculate the discounted amount and add it to the total
            productDiscount = productPrice * discount_percentage(productCode);
            totalDiscount += productDiscount;

            //Update the price and add it to the total
            productPrice -= productDiscount;
            totalPrice += productPrice;

            //Calculate points and add them to the total
            productPoints = product_points(productCode, productPrice);
            totalPoints += productPoints;
        }

    } while (productCode > 0);

    printf("------------------\n");
    printf("Total amount: %.2lf Euro\n", totalPrice);
    printf("Total discount: %.2lf Euro\n", totalDiscount);
    printf("Total points: %d\n", totalPoints);

    return 0;
}

int get_code() {
    //Declare variables
    int code;

    do {
        printf("Enter the product code: ");
        code = GetInteger();

        if (code >=0 && code <= 2000) {
            return code;
        }

        printf("Wrong code! (0-2000)\n");
    } while (code < 0 || code > 2000);
}

double discount_percentage(int code) {
    switch (code) {
        case 1 ... 300:
            return 0.05;
        case 301 ... 500:
            return 0.10;
        case 501 ... 1000:
            return 0.15;
        case 1001 ... 2000:
            return 0.20;
    }
}

int product_points(int code, double price) {
    //Declare variables
    int points;

    //One point is always awarded regardless of price
    points = 1;

    if (code > 999 && code < 1501) {
        points += ceil(price/5);
    }

    return points;
}
