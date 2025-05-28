
#include<iostream>
using namespace std;

class Animal{
    string name; 
    public:
       void setName(string animalName){
        name=animalName;
       }

        void showAnimal(){
            cout<<"name of the Animal:"<< name;

        }

};




class Carnivore: public Animal{
    string vegetation;
    public:
    void setfood(string food){
        vegetation = food;

    }

    void showFood(){
        cout<<"Type of Animal: "<< vegetation << endl;

    }
};

class Mammal : public Carnivore{
    string habitat;

    public:

        void setHabitat(string place){
            habitat = place;
        }

      void showHabitat(){
        cout<<"Living Place:"<< habitat <<endl;
      }

};


int main(){
    string animal_name, food_type , Place_of_Living;

    cout<<"Enter the Name of the Animal 7 its food type:";
    cin>>animal_name>>food_type >> Place_of_Living;

    Carnivore c1;
c1.setName(animal_name);
   c1.setfood(food_type);

    Mammal m1;
    m1.setName(animal_name);
    m1.setName(food_type);
    m1.setName( Place_of_Living);

    m1.showAnimal();
    m1.showFood();
    m1.showHabitat();




}
