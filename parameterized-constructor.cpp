
#include<iostream>
using namespace std;

class Area{
     private:
     int length,breadth;
     
     public:
         int result;
      Area(){   // default constructor (no problem)
        length=0;
        breadth=0;


      }
      Area(int a, int b){
          length =a;
          breadth=b;

      }

      void calculateArea(){
        result=length*breadth;
        cout<<"Area of Rectangle with length :"<< length<<" and breadth:"<<breadth<<"is equal to "<<result <<endl;

      }
};


 int main(){
    int len,wid;

     Area rect1; // object created
    rect1.calculateArea(); 

    cout <<" enter the length& breadth for finding the Area of Rectangle : ";
    cin>> len >>wid;
     
    Area rect2(len,wid); // object created
    rect2.calculateArea(); 


 }