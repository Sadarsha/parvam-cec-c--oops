
#include<iostream>
using namespace std;

class Increment{

    private:
      int number,value, value1;

      public:
        void setNumber(int num){
            number = num;

        }
                void operator ++ (){
                    value = number +5;

                }

                void operator --(){
                       value = number-5;
                }
                void showValue(){
                    cout<<"Before Incrementing :" << number <<endl;
                    cout<< "after Incrementing :" << value <<endl;
                    cout<< "before Dectementing :" << number<<endl;
                    cout<< "after Dectementing :" << value1 <<endl;

                }
};
   
int main (){
    int n;
      cout<<"Enter any number for incrementing  & decrementingits value by 1:";
      cin>> n;
      Increment num1;


      num1.setNumber(n);

      ++num1;
      --num1;
      num1.showValue();

      cout<<"Number after Incrementing:"<< ++n <<endl;
      cout<<"Number after Decrementing:"<< --n<< endl;

}

                                              
                              
                     
                                 
 
 
 







 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
   
 

 
 
 
 
 
 
 
 

 

 

 

 
 
 

 
 
 
 
 

 
 
 
 
 
 

 
 
 


 
 

 
 
  
 

 
 
 
 

 



