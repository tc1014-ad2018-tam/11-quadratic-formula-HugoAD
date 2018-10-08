/*
 * This program allows the user to calculate the values of x in a quadratic equation.
 * The general quadratic equation is ax²+bx+c=0.
 * The program must ask for values a, b and c, validating that "a" is never 0 and
 * the values are numeric.
 * If the program can´t compute the square root then inform the user.
 *
 * Author: Hugo Aguirre Doria
 * Date: October 7th, 2018
 */
#include <stdio.h>
#include <math.h>

//Variable declaration
double a;
double b;
double c;
double x1;
double x2;

//Function when x is subtracted
double ansmin (double a, double b, double c){
    double x1 = 0;
    x1 = ((0-b) - (sqrt(pow(b,2) - (4*a*c)))) / (2*a);
    return x1;
}
//Function when x is added
double ansplu (double a, double b, double c) {
    double x2 = 0;
    x2 = ((0-b) + (sqrt(pow(b,2) - (4*a*c)))) / (2*a);
    return x2;
}

int main(void) {
    printf("Welcome! I will help you computing a quadratic formula.\n");
    printf("Give me values of 'a', 'b' and 'c' separated by comas.\n");
    scanf("%lf,%lf,%lf", &a, &b, &c);

    while (a == 0) {  //While variable "a" is 0 then inform the user
        printf("Variable 'a' can't be 0\n");
        return 0;
    }

    // call for functions
    x1 = ansmin(a, b, c);
    x2 = ansplu(a, b, c);

    // if equation can't be done then inform the user, else show values
    if (pow(b, 2) < 4*a*c) {
        printf("I can't solve the root of a negative number!\n");
    } else {
        printf("The value of x1 is: %lf\n", x1);
        printf("The value of x2 is: %lf", x2);
    }

    return 0;
}