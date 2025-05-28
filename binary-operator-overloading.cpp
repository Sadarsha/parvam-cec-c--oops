#include<iostream>
using namespace std;

   class Complex{
    int real, imaginary;


    public:
      Complex(){
        real=0;
        imaginary=0;


      }
    

      Complex(int r, int i){
        real=r;
        imaginary=i;

      }


      Complex operator +(const Complex & c){
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        cout<<" first number :"<< real<<" + "<< imaginary << "i"<<endl;
        cout<<" secound number :"<< c.real<<" + "<< c.imaginary << "i"<<endl;

        return temp;

      }

       Complex operator -(const Complex & c){
        Complex temp;
        temp.real = real - c.real;
        temp.imaginary = imaginary - c.imaginary;
        cout<<" first number :"<< real<<" - "<< imaginary << "i"<<endl;
        cout<<" secound number :"<< c.real<<" -  "<< c.imaginary << "i"<<endl;

        return temp;

      }
         

      void showSum(){
        cout<<"Sum of 2 Complex Number :"<< real << " +  " << imaginary << "i" <<endl;

      }

      void showDifference(){
        cout<<"Difference of 2 complex Number :"<<real << " - "<< imaginary << " i "<<endl;
      }

   };


   int main(){
    int r1,r2,i1,i2;
    cout<<" Enter the first Cmplex Number(real number  & imaginary number : eg. 5+ 3i):"<< endl; 
    cin>> r1>>i1 ;
     cout<<" Enter the  second  Cmplex Number(real number  & imaginary number : eg. 10+ 6i):"<< endl; 
    cin>> r2>>i2 ;



    Complex comp1(r1,i1);
    Complex comp2(r2,i2);


    Complex sum = comp1 + comp2;
    Complex diff = comp1-comp2;
    cout<<" first Complex Number :"<< r1 << " + "<< i1<<"i" ;
    cout<<" Second Complex Number :"<< r2 << " + "<< i2 <<"i" ;

    sum.showSum();
     diff.showDifference();




   }

