
#include<iostream>
using namespace std;


class print{
     private:
     int number;
     string word;
     float decimal;
public:
void setinteger(int num);

void setfloat(float dec);

void setString(string str);

void print(int n){
     cout<<"printing the integer value:"<< number <<endl;


} 
 void print(float f){
      cout<<"printing the float  value:"<< decimal  <<endl;

 }
 void print(string s ){
     cout<<"printing the string value :"<< word <<endl;
 }

};

