#include <iostream>
using namespace std;

int main()
{
    string name; // declare name
    int age; // declare age

    cout<<"Enter age:  "; // Display and ask user to type in any age
    cin>>age; // accept and store any value entered into 'age'
    cin.ignore();

    cout<< "Enter name:  "; //  display and ask user to type in any name
    getline(cin, name); // accept and store name in 'name'
    
    
    if (age % 2 == 0 ){  // if age can be divided by 2
        for (int N = 0; N < 10 ; N++ ) // set N to 0, N cant be over 10, increase N by 1
        cout<< name <<endl; // will print name 10 times
    }
    else { // if age cannot be divided by 2 
        for ( int N = 0; N < 5; N++ ) 
        cout << name << endl; // only print name 5 times
    }
    



}