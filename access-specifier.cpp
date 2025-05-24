
#include<iostream>
using namespace std;

class Bank{
    private:
         int balance=0;
      public:
           string custName,custEmail;
           int acNumber;

           void createAccount(string cName,string cEmail){
            custName= cName;
            custEmail=cEmail;
           } 

           void displayinfo(){
            cout<<"Customer Nmae:" << custName <<endl;
            cout<<"Customer Email:" << custEmail <<endl;

           }
           //setter
           void addBalance( int account,int Amount){
            balance += Amount;
             cout<<"the amount has been deposited sucessfilly!" <<endl;

           }
           //setter
           void  widthdrawAmount( int account,int Amount){
            if(Amount<= balance){
    
            
            balance -= Amount;
             cout<<"the amount has been withdraw sucessfilly!" <<endl;

           }
          else{
             cout<< "Insufficient balance cannot withdraw"<<endl;

          }
        }
           //getter
           void checkBalance(){
             cout<<"Bank Balance:" << balance <<endl;
           }

};
 int main(){
    Bank cust1;
    string name, email;
    int acNum,amount;
    // cust1.balance =8000; // we can't assign the value to the private member
     cout<<"enter your name :";
     cin>>name;
     cout<<"enter your email id :";
     cin>>email;
     cout<<"enter your account number:";
     cin>>acNum;
     cout<<"enter the amount to be deposited :";
     cin>> amount;

     cust1.createAccount(name,email);
     cust1.displayinfo();
     cust1.addBalance(acNum, amount);
     cust1.checkBalance();
     cout<<"enter the amount to be deposited :";
     cin>> amount;
     cust1.widthdrawAmount(acNum, amount);
     cust1.checkBalance();



 }