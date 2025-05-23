
#include<iostream>
using namespace std;

class Student {
    public:
       string name,college,branch;
       int sem;

       void display(){
        cout <<"name:"<< name <<endl;
        cout <<"college:"<< college<<endl;
        cout <<"branch:"<< branch<<endl;
        cout <<"sem:"<< sem <<endl;
       }
};

int main(){
    Student student1;
    student1.name="praddep";
    student1.college="cec";
    student1.branch="aiml";
    student1.sem=8;  


    student1.display();

    Student student2;
    student2.name="praddep";
    student2.college="cec";
    student2.branch="aiml";
    student2.sem=8;  


    student2.display();

}