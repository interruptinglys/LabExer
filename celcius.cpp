// this program converts temperature value from Celsius to Kelvin and Fahrenheit
#include <iostream> 
using namespace std; // using standard namespace
int main() // main fuction
{ //open main function block

    //declare variable for De3gree celsius, degree kelvin, degree fahrenheit 
    float DegreeC, DegreeK, DegreeF; 
    
    cout<<" Enter degrees in Celsius: "; // user enter a value for celsius
    cin>> DegreeC; // accept and store the value in DegreeC.

    // formulas to convert degree celcius to degree kelvin and fahrenheit
    DegreeK = DegreeC + 273.15;
    DegreeF = 9/5*DegreeC + 32;

    cout<< "The value of " <<DegreeC<< "degree C in K is: "<<DegreeK<<endl; //display celsius -> kelvin
    cout<< "The value of " <<DegreeC<< "degree C in F is: "<<DegreeF<<endl; // display celsius -> fahrenheit

    return 0; // return 0 to OS
}