
#include<iostream>
using namespace std;


class Wish{
    private:
        string name;
        int age;

        public:
        Wish(){
            name="Unknow";
            age=0;

        }
        Wish(string n, int a); // parameter ocnstructor

        void birthdayWishes();
};


Wish ::Wish(string n, int a){  //defiling the rules od parameter of constructor tjhe class using scope Resolution Operator   
     name=n;
     age=a;


}
 void  Wish ::birthdayWishes(){  //syntax:classname :: constructtor     parameter no return type  required )
            cout<<"Happy Birthday " << name << "! Now you' re" << age << "Years old."<<endl;
 }


int main(){

    string personName;
    int personAge;
       

    Wish person1;     //object Declared 
    person1.birthdayWishes();


    cout<<" Enter your name:";
    cin>> personName;
    cout<<" Enter your age:";
    cin>> personAge;  

    Wish person2(personName,personAge);
    person2.birthdayWishes();

}