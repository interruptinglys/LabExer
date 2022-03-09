// program : temperature by Lys.

#include <iostream>
using namespace std;

int main()
{
    int value; // declaring value for temperature

    cout<<" Enter temperature: "; // asking to type in a temperature
    cin>>value; // store temperature value

     if (cin.fail() ) // if anything other than a letter is entered, cin will fail
    {
        cout<<"Invalid input"<<endl;  // it will print invalid input
    }
    else if(value > 40 and value <= 54)  //  number range from 41 to 54
    {
      cout<< "Stay hydrated! "<<endl; // <= it will print this
    }
     else if ( value > 33 and value <= 40 ) // number range from 32 - 40
     {
       cout<< "Stay Cool and safe!"<<endl; // <= if value if between that range it wil print this
     }
     else if ( value > 27 and value <= 31) // range 26-30
     {
        cout<< "Keep a sunblock handy! "<<endl; // if value is between 26-30 it will print this
     }
     else if (value > 21 and value <= 25) // range 20-25
     {
         cout<< "Always keep your cool!"<<endl; // if value is in that range, it will print this
     }
    else if ( value < 20) // any value below 20
    {
        cout<<"Cool breeze in the air! "<<endl; // it will print this
    }
    else if (value > 54) // any value above 54
    {
        cout<<"Out of Range"<<endl; // it will print this
    }

}