
#include<iostream>
using namespace std;

class Company{
    private:
         string cin;
         int totalWorth =0;

         public:
             string gstNum, location;
             int numOfEmp;
             //setter method 
             setDeatils(string cinNum,int worth){
                cin = cinNum;
                totalWorth= worth;
             }
             //getter method
             void getDeatils(string gstNumber){
                cout<<" corporaye identity number:"<<cin<<endl;
                cout<<"total Worth of the Company:"<<totalWorth<<endl;

             }
             void getBasicDetails(); //declare the member function


};


// fuction definition out the class 
void  Company :: getBasicDetails(){
    cout<<" GST Number:"<< gstNum <<endl;
     cout<<"Location:"<< location <<endl;
      cout<<" Number of Employes :"<< numOfEmp <<endl;

}
  

int main (){
    Company comp1;// object created 
    comp1.gstNum ="123456ABCD78";
    comp1.location="Bengaluru";
    comp1.numOfEmp=50;
    comp1. getBasicDetails();

    
string cinNumber;
int companyWorth;


cinNumber = "0435075ADRSG";
companyWorth= 50000000;


comp1.setDeatils(cinNumber, companyWorth);
comp1.getDeatils(comp1.gstNum);
}