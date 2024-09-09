// @author: Shyanne Bean [5121506]
// @date: September 1st, 2024
// Juan Parra - Intro to Programming in C (0v06)
//
// This program is designed to run calculations for a city shape based on user input.
// (circle on a graph)
// It uses typical circle formulas to calculate these values.
// 
// Input: a set of 4 values to represent points (point1X, point1Y, point2X, point2Y)
// Output: terminal output to show the results of calculations      
// (to run without asking for user input, use the flag --0)
//
// during this assignment, i have concluded that i need a rubber duck to speak with

#include <stdio.h>
#include <math.h> 
#include <string.h>
#define PI 3.14159

int main(int argc, char **argv) {

    //======================================================================================
    // the solution to not allowing parameters (like a crazy person, but i get it): scope! |
    //======================================================================================

    double point1X = 1.0;   // X1
    double point1Y = 3.0;   // Y1

    double point2X = 2.0;   // X2
    double point2Y = 4.0;   // Y2

    double distance = 5.0;  // to be set later

    // bonus points :hype:
    double askForUserInput() {

        double userInput = 0.0;
        scanf("%lf", &userInput);

        return userInput;
    }

    // determines whether the program asks for values or provides them
    if (argc == 1) {

        // user input for bonus points
        printf("Enter the value of X for Point 1: ");
        point1X = askForUserInput();

        printf("Enter the value of Y for Point 1: ");
        point1Y = askForUserInput();

        printf("Enter the value of X for Point 2: ");
        point2X = askForUserInput();

        printf("Enter the value of Y for Point 2: ");
        point2Y = askForUserInput();
    }

    //===================
    // helper functions |
    //===================

    void printPoints() {

        printf("Point #1 entered: x1 = %0.3lf; y1 = %0.3lf\n", point1X, point1Y);
        printf("Point #2 entered: x2 = %0.3lf; y2 = %0.3lf\n\n", point2X, point2Y);

        return;
    }

    void printDistance() {
        printf("The distance between the two points is %0.3lf", distance);
    }

    void printData(char dataType[], double dataValue) {
        printf("\nThe %s of the city encompassed by your request is %0.3lf", dataType, dataValue);
    }

    //=====================
    // required functions |
    //=====================

    // Diameter (distance between point1 and point2)
    double calculateDistance() {
        return sqrt(pow(point2X - point1X, 2) + pow(point2Y - point1Y, 2));
    }

    // does not return anything useful
    double calculateWidth() {
        printData("width", distance);
        return 1.0;
    }

    // does not return anything useful
    double calculateHeight() {
        printData("height", distance);
        return 1.0;
    }

    // A = (PI * d^2) / 4
    double calculateArea() {
        double area = (PI * pow(distance, 2.0)) / 4.0;
        printData("area", area);
        return area;
    }

    // C = PI * d
    double calculatePerimeter() {
        double perimeter = PI * distance;
        printData("perimeter", perimeter);
        return perimeter;
    }

    //========================
    // execution time, baby! |
    //========================


    printPoints();

    distance = calculateDistance();
    printDistance();

    calculateWidth();
    calculateHeight();
    calculateDistance();
    calculateArea();
    calculatePerimeter();

    return 0;
}