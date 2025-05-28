

#include<iostream>
using namespace std;

class Pizza{
    private:
         string secretIngredient;


         public:
         string pizzaType, size;
         int price;
         bool isPaymentDone;


          void  orderPizza(){
            cout<<"Order the pizza by selecting  your favorite pizza :"<<endl;

          }

          void  bookPizza(){
            cout<<"Booking Pizza !" <<endl;

          }
            void bakePizza(string type, string PizzaSize){
            pizzaType = type;
            size = PizzaSize;
            cout<< "Pizza Type:" << pizzaType << ", Size" << size <<endl;
             }

             void addIngredient(string secret){
                secretIngredient = secret;

             }
               void confirmOrder(){
                cout<< "Order confirmed!" << endl;
               }
                  


                 bool checkpayment(int money, bool payment){
                    price= money;
                    isPaymentDone = payment ;
                    if(isPaymentDone = true){
                         cout<<"Amount Paid: Rs."<< price << ", Payment Succesfully!"<< endl;
                           confirmOrder();
                           bookPizza();
                           return true;
                            } else{

                        cout<< "Amount Due :Rs."  << price << ", Payment pending !"<<endl;
                           return false ;
               }
            }
                

                void servePizza( int amount, bool paid , string typeOfPizza,  string sizeOfpizza , string secretItem ){
                   if(!checkpayment(amount,paid)){
                       cout << "Order   Cancelled  due to the pending payment! " <<  endl;
                       return;
                   }
                    bakePizza(typeOfPizza, sizeOfpizza);
                    addIngredient(secretItem);
                    cout<<"Pizzaa served! Enjoy your Pizza";
                }
};
      int main(){
        string pizType, size, secretIng;
        int pizzaAmount;
        bool amountPaid;

        Pizza customer1;
        customer1.orderPizza();


        cout << "Enter the Pizza Type (veg/non-veg), Size (regular / Medium/Large):";
        cin>> pizType>>size;

        pizzaAmount= 399;
        cout << "Did the Pay the amount (Type 'Type ' if paid / Type 'False' if not paid):";
        cin>> amountPaid;
           customer1.servePizza(pizzaAmount, amountPaid , pizType, size, secretIng);

      }