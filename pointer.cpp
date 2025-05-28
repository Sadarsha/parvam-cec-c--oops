
#include<iostream>
using namespace std;


    int main(){
        int a;
        // syntax for declaring  the pointer :
        // datatype the address to the pointer: & variablre _ name 


        int*ptr = &a;

        float decimal;
        float*f = &decimal;



cout<< "Enter the Value of a:";
cin>>a;
 
    cout<< "Enter the decimal value :";
cin>>decimal;

cout<<" Value of a:"<< a <<endl;
cout<<" Address of a:"<< a <<endl;
cout<<" Value of pointer(ptr):"<< ptr <<endl;
cout<<" Address of ptr:"<< &ptr<<endl;
cout<<" Value pointed by ptr:"<< *ptr<<endl;



cout<<" Value of decimal:"<< decimal<<endl;
cout<<" Address of decimal :"<< &decimal <<endl;
cout<<" Value of pointer(ptr):"<< f <<endl;
cout<<" Address of ptr:"<< &f <<endl;
cout<<" Value pointed by ptr:"<< f <<endl;

    }