
#include<iostream>
using namespace std;

class Name{
    private:
    string Name;
    public:
    void setName(string n){
        this->Name =n;
    }
    void showName(){
        cout<<" your name is "<< Name <<endl;
    }
};


int main(){
    string studentName;

    cout<<"Enter your name:";
    cin>> studentName;

    Name name1;
    name1.setName(studentName);
    name1.showName();


}