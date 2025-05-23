
#include <iostream>
using namespace std;

class Calculate
{
public:
    // data members
    int num1, num2;
    float res; 

    // declared the constructor & it is also 

     Calculate()
     {

         num1 = 5;
         num2 = 10;
     }
    void showOutput()
    {
        cout << "Addition :" << num1 + num2 << endl;
        cout << "subtraction  :" << num1 - num2 << endl;
        cout << "Multiplication :" << num1 * num2 << endl;
        cout << " division :" << num2 / num1 << endl;
        cout << "reminder :" << num2 % num1 << endl;
    }
};

int main(){
    Calculate c1; // object

    // assigning the value to data members 
    Calculate c2;
     c2.num1=25;
     c2.num2=30;
     c1.showOutput();
     c2.showOutput();
}








       