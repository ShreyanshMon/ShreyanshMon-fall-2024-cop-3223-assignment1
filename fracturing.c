// fracturing.c
// Author: Shreyansh Mondal 
// UCFID: 165872
// Date: 9/8/24
// Class: COP 3223C, Professor Parra

#include <stdio.h>
#include <math.h>
#define PI 3.14159

//Fuction that asks for user input
double askForUserInput()
{
    double num;
    scanf("%lf", &num);
    return num;
}

//Finds the distance between two points for the diameter of a circle
double getDistance()
{
    printf("Point #1 entered: x1 = ");
    double x1 = askForUserInput();
    printf("y1 = ");
    double y1 = askForUserInput();
    printf("\nPoint #2 entered: x2 = ");
    double x2 = askForUserInput();
    printf("y2 = ");
    double y2 = askForUserInput();
    printf("\n");

    double distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return distance;
}

//The rest of the methods are simple math that print what is desired.
double calculateDistance()
{
    double distance = getDistance();
    printf("The distance between the two points is %lf \n", distance);
    return distance;
}

double calculatePerimeter()
{
    double perimeter = (getDistance() * 2 * PI);
    printf("The perimeter of the city encompassed by your request is %lf \n", perimeter);
    return 2;
}

double calculateArea()
{
    double radius = getDistance();
    radius = radius/2;
    double area = (PI * radius * radius);
    printf("The area of the city encompassed by your request is %lf \n", area);
    return 2;
}

double calculateWidth()
{

}

double calculateHeight()
{

}

//main method running all of the created methods
int main(int argc, char *argv[])
{
    calculateDistance();
    calculatePerimeter();
    calculateArea() ;
    calculateWidth() ;
    calculateHeight() ;

    return 0;
}