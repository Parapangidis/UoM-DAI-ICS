/*
 * File name: a1f0.c
 * ------------------
 * Author: Christos Parapangidis, with direction from Alexandros Chatzigeorgiou
 * Date: 3 Oct 2022
 * This program adds two numbers
 */
#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

main () {
    // declare variables
    int n1, n2, total;

    printf("This program adds two numbers\n");

    printf("Please enter the first number: ");
    n1 = GetInteger();

    printf("Please enter the second number: ");
    n2 = GetInteger();

    total = n1 + n2;

    printf("The sum is %d\n", total);
  }
