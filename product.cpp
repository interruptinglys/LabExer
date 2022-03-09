// Class assignment by Lysa SorKeo
#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;

    cout<< "Enter a number: ";
    cin>> a;
    cout<< "Enter a second number: ";
    cin>> b;
    cout<< "Enter a third number ";
    cin>> c;

    int sum = a+b+c;
    int avg = sum/3;
    int product = a*b*c;

    cout<< "The sum of " <<a<< " , " <<b<< " and "<<c<< "is " <<sum<<endl;
    cout<< "The average of " <<a<< " , " <<b<< " and " <<c<< " is " <<avg<<endl;
    cout<< "The product of" <<a<< " , " <<b<< " and "<<c<< "is " <<product<<endl;   

    return 0; 
 

}