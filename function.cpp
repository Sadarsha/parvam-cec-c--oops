
#include<iostream>
using namespace std;
 void sayHello(){
    cout<<"Hello!";
 }

int sayHi(string name ) {
    cout <<"Hi,"<< name<<endl;
}
int greet(string fname,string lname, int age){
    cout<<"Hi,"<<fname<<""<<lname<<",age:" << age <<endl;
}

int main()
{
     string firstname, lastname, friendname;
     int age; 
     cout <<"enter your first name:";
     cin >>firstname; 
     cout <<"enter your last name :";
     cin >>lastname;
      cout <<"enter your age:";
     cin >>age; 
     cout <<"enter your friendname :";
     cin >>friendname;
     sayHello(); 
     sayHi(firstname);
     sayHi(friendname);
     greet(firstname, lastname,age);
      
}