// This program calculates the Area and Circumference of a circle for any given radius
#include <iostream> 
using namespace std; // using standard namespace

#define PI 3.14 // giving PI its original value

int main() // main function
{   // open main function block

    float a; // declare variable for area
    float r; // declare varaible for radius
    float c; // declare variable for circumference 

    cout<< "Enter radius: "; // ask to enter any value for radius
    cin>> r; // accept and store value of radius in r.

    // formulas to calcutate area, circumference of a circle 
    a= PI*r*r; //  a = PI * radius * radius 
    c= 2*PI*r; //  c = 2 * PI * radius


    cout<< "The area of the circle is: " << a <<endl; // display area
    cout<< "The circumference of the circle is: " << c <<endl; // display circumference
    return 0;

}
