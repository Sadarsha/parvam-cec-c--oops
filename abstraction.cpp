

#include<iostream>
using namespace std;
    
   class Bike{
    public:
    string brand , model, engine_type;
    int year, price;
     
    void injectFuel(){
        cout<< "Injected the Fuel - Petrol!"<< endl;

    }

        void igniteFuel(){
        cout<< "Ignite  the Fuel !"<< endl;


    }



    void start(string model){
        injectFuel();
        igniteFuel();
        cout<< model<<" Started , Happy jounery!";


    }
    void stopAcceleration(){
     cout<< model<<" Acceleration Stopped !" << endl;
    }

      void stopFuelFlow(){
     cout<< "Stopping the Fuel"  << endl;
    }
     void stop(){
        stopAcceleration();
        stopFuelFlow();
        cout<<model <<"stopped, lock the vehicle";
    }



   };


   int main(){
    Bike bike1;
    bike1.brand = "Bajaj";
    bike1.model = " pulsar Ns125";
    bike1.engine_type = "BS6";
    bike1.year= 2022;
    bike1.price = 15000000;
    bike1.start(bike1.model);
    bike1.stop();

     

   }