
#include<iostream>
using namespace std;


 class Interest{
    private:
      int principal, term,rate,totalInterest;
      float rateInPercent;


      public:

      int simpleInterest=0;
      Interest(){
          principal=0;
          term=0;
          rate=0;
          totalInterest =0;
          rateInPercent=0;
          cout<< "Total interest Earned :"<< totalInterest << endl;


      }
      void setValues(int a, int y){
           principal =a;
           term=y;

      }
           void setRateValueInteger(int rateInteger){
            rate = rateInteger;

           }
           void setRateValueFloat(float rateInFloat ){
            rateInPercent = rateInFloat;
           }



         
      Interest(int p, int t, int r ){
              setValues(p,t);
          setRateValueInteger(r);
        simpleInterest=(principal * term * rate)/100;
        cout<<"Simple Interest for the following details :"<< endl;
        cout<<"principal Amount :"<<  principal<< endl;
        cout<<" no. of years(Term):" <<  term <<endl;
         cout<<" rate of Interest(in Integer):" <<  term <<endl;
         totalInterest = principal + simpleInterest;
        cout<<"Simple Interest for the following details :"<< totalInterest << endl;

      }

      Interest(int p, int t, float rateInDecimal ){
         setValues(p,t);
          setRateValueFloat(rateInDecimal);
        simpleInterest=(principal * term * rateInDecimal);
        cout<<"Simple Interest for the following details :"<< endl;
        cout<<"principal Amount :"<<  principal<< endl;
        cout<<" no. of years(Term):" <<  term <<endl;
         cout<<" rate of Interest(in Decimal ):" <<  term <<endl;
         totalInterest = principal + simpleInterest;
          cout<< "Total interest Earned :"<< totalInterest << endl;
         cout<<"Simple Interest for the following details :"<< totalInterest << endl;

      }

      void setValues(int a, int y, int r){
        principal =a;
        term=y;
        rate= r;

      }
       
       ~Interest(){
         cout<< "Destructor has been called to destroy or free up the memory used by constructor "<<endl;
       };

 };

            int main(){
            int amount , year,rateOfInterest;
            float interestRate;
              Interest int1;
              
              cout<< "Enter the principal Amount, no. of years & Rate of interest(eg.5):";
              cin>> amount >> year  >>  rateOfInterest;

              Interest int2(amount , year, rateOfInterest);


              cout<<"Enter the principal Amount , no. of years & Rate of Interest(eg.0.05):";
               cin>> amount >> year >> interestRate ;

               Interest int3(amount , year, interestRate);

        


            

         }