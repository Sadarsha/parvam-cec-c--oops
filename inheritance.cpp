

#include<iostream>
using namespace std;

class Parent{
    private:
       int net_worth = 0;
       public:
          string family_name,family_head;
          int number_of_members = 0;


          void setData(int worth, string familyNmae, string familyHead, int member_count){
            net_worth = worth;
            family_name= familyNmae;
            family_head = familyHead;
            number_of_members = member_count;

          }

          int showNetWorth(){
            return net_worth;
          }

          int getFamilyInfo(){
            cout<<" i 'am from "<< family_name<<" family, and my family head is "<< family_head << ". Our family's Net-Worth is about "<< showNetWorth()<<endl;
          }
};

 class Child : public Parent{
    public:
      string member_name;
      int age;
        

      void addDetails(string name, int person_age){
        member_name = name;
        age=person_age;

        }

        void getFamilyDetails(){
            cout<<"My name is "<< member_name << " and I'm"<< age << " years old. And I'm from "<< family_name<< " family, and my family head is "<< family_head<< ". Our family's Net-worth is about " <<  showNetWorth();

        }

 };
      
int main(){
    string fName, fHead , cname;
    int childAge, fworth, fMembers;

    cout<< "Enter your family name ,  family head, number of members & net worth:";
    cin>>   
    
     
    fName >> fHead>> fMembers >>fworth; 

    Parent p1;
    p1.setData(fworth,fName,fHead, fMembers);
    p1.getFamilyInfo();


    cout<< "enter your name & age:";
    cin>> cname>> childAge;

    Child c1;
    c1.setData(fworth, fName,fHead,fMembers);
    c1.addDetails(cname,childAge);
    c1.getFamilyDetails();






}