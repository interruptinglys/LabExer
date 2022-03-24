#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14 // giving PI its original value

// case 5 Prime Numbers
void printPrimeFactors(int n){
    while (n%2 ==0){
        cout<< "2\t";
        n=n/2;
    }
    for (int i=3; i<= sqrt(n); i=i+2){
        while (n%i ==0){
            cout<<i<<"\t";
            n=n/i;
        }

    }
    if (n>2)
    cout<<n<<"\t";
}

int main()
{
    char Choice;
    char Choice2;
     
    //case 1
    float a;
    float b;
    float c;
    float sum = a+b+c;
    float avg = sum/3;
    float product = a*b*c; 
    
    // case 3
    int age; 
    string name; 

    // case 5
    int n;

    // case 6
    int Grade;
    int A=0;
    int B=0;
    int C=0;
    int D=0;
    int F=0;
    int sum2;

    // menu
    Options:
    cout<< "Labotory Exercise Menu: \n";

    cout<< "[1] On arithmetic Operators and Keyboard Input \n";
    cout<< "[2] On Arithmetic Operators \n";
    cout<< "[3] Accepting name and Age program \n";
    cout<< "[4] Accept Temperature and display Message Program \n";
    cout<< "[5] On prime and composite numbers \n";
    cout<< "[6] Exam Scores Program \n";
    cout<< "[7] Switch \n";
    cout<< "[X] Exit \n";
    cout<< "----------------------------------------------------------------------------------------- \n";
    cout<<"Your Choice:    \n";
    cin>> Choice; 
    switch(toupper(Choice))
    {
        case '1':
    
        cout<< "Enter a number: ";
        cin>> a;
        cout<< "Enter a second number: ";
        cin>> b;
        cout<< "Enter a third number ";
        cin>> c;

        cout<< "The sum of " <<a<< " , " <<b<< " and "<<c<< "is " <<sum<<endl;
        cout<< "The average of " <<a<< " , " <<b<< " and " <<c<< " is " <<avg<<endl;
        cout<< "The product of" <<a<< " , " <<b<< " and "<<c<< "is " <<product<<endl;   

        ///////////////////////////////////////////////  

        case '2':
        cout<< " Choose Your Program:  \n";
        cout<< "[1] Circumference and Area \n";
        cout<< "[2] Temperature Conversion \n";
        cout<< "[B] Go Back to the main menu \n";

        cout<< "Your Choice:  \n";
        cin >> Choice2;
        switch (toupper (Choice2))
        {
            case '1':
            cout << "Selected 'Circumference and Area:  \n";

            float a; 
            float r; 
            float c; 
            cout<< "Enter radius: "; 
            cin>> r; 
            
            a= PI*r*r; 
            c= 2*PI*r; 
            cout<< "The area of the circle is: " << a <<endl; 
            cout<< "The circumference of the circle is: " << c <<endl; 
            break;

            ///////////////////////////////////////////////  
   
            case '2':
            cout<< "Selected 'Temperature Conversion ' \n";
            float DegreeC, DegreeK, DegreeF; 
    
            cout<<" Enter degrees in Celsius: "; 
            cin>> DegreeC; 

            DegreeK = DegreeC + 273.15;
            DegreeF = 9/5*DegreeC + 32;

            cout<< "The value of " <<DegreeC<< "degree C in K is: "<<DegreeK<<endl; 
            cout<< "The value of " <<DegreeC<< "degree C in F is: "<<DegreeF<<endl; 

            case 'B':
            case 'b':
            cout<< "Exiting [2] \n";
            goto Options;
            break;

        }
        ///////////////////////////////////////////////
        case '3':
       
        cout<<"Enter age:  "; 
        cin>>age; 
        cin.ignore();

        cout<< "Enter name:  "; 
        getline(cin, name);
    
        if (age % 2 == 0 ){ 
        for (int N = 0; N < 10 ; N++ ) 
        cout<< name <<endl; 
        }
        else { 
        for ( int N = 0; N < 5; N++ ) 
        cout << name << endl; //
        }
        break;

        ///////////////////////////////////////////////

        case '4':
        float value; 

        cout<<" Enter temperature: "; 
        cin>>value; 

        if (cin.fail() )
        {
            cout<<"Invalid input"<<endl;
        }
        else if(value > 40 and value <= 54)  
        {
            cout<< "Stay hydrated! "<<endl;
        }
        else if ( value > 33 and value <= 40 )
        {
            cout<< "Stay Cool and safe!"<<endl; 
        }
        else if ( value > 27 and value <= 31) 
        {
            cout<< "Keep a sunblock handy! "<<endl; 
        }
        else if (value > 21 and value <= 25) 
        {
            cout<< "Always keep your cool!"<<endl; 
        }
        else if ( value < 20) 
        {
            cout<<"Cool breeze in the air! "<<endl;
        }
        else if (value > 54) 
        {
            cout<<"Out of Range"<<endl; 
        }
        break;

        ///////////////////////////////////////////////
        case '5':
        cout<<"Please enter a number: ";
        cin>>n;
        cout<<"Prime factors of "<<n<<"are: 1        \t";
        printPrimeFactors(n);
        return 0;

        ///////////////////////////////////////////////
        case '6':

        cout << "Enter Exam Scores:  ";
   
        for (Grade=0, Grade <=100, Grade++;;){

        cin>> Grade;

        if (Grade >= 90 && Grade <= 100) {
            A++;
        } else if (Grade >= 80 && Grade <= 89){
            B++;
        } else if (Grade >= 70 && Grade <= 79){
            C++;
        } else if (Grade >= 60 && Grade <= 69){
            D++;
        } else if (Grade >=0 && Grade <= 59){
            F++;
        } else if (Grade > 100){
            cout << "Out of Range";
        } else {
            break;
        }
        }
        cout << "Number of A's: " << A << endl;
        cout << "Number of B's: " << B << endl;
        cout << "Number of C's: " << C << endl;
        cout << "Number of D's: " << D << endl;
        cout << "Number of F's: " << F << endl;

        sum2 = A+B+C+D+F;

        cout << "Total Number of Scores: "<< sum2 << endl;
        break;

        ///////////////////////////////////////////////

        case '7':
        cout<< "Switch" <<endl;

        case 'X':
        cout<< "Exiting the Program \n";
        goto Options;
        break;
        cout<< "----------------------------------------------------------------------------------------- \n";


    }
    return 0;
} 