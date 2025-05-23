
#include<iostream>
using namespace std;


class Car{
    public:
    string brand,model,varient,fuel_type;
    int year;
    float price;

    void start(){
        cout<<model << " started!"<< endl;  
    }
    void park(){
        cout<<model << " parked!"<< endl;
    }
    void stop(){
    cout<<model << " stoped!"<< endl;
    } 

    
};

int main(){
    Car c1;
    c1.brand = "Toyota";
    c1.model = "innove";
    c1.varient = "6 seater";
    c1.fuel_type = "diseal";
    c1.year = 2024;
    c1.price = 150000000;
    c1.start();
    c1.park();
    c1.stop();

}