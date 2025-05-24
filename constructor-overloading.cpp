
#include<iostream>
using namespace std;


class Area{
    private:
       int length,breadth, height;
       float radius;

       public:
          int result;

          Area(){
              length=0;
              breadth=0;
              height-0;
              radius=0;
              result=0;
              cout <<"Area :"<< result << endl;
          }
           


          Area(int a){
              length =a;
              result= length * length;
            cout<<"Area of square:"<< result <<endl;
          }
            Area(int c, int d){
              length =c;
              breadth=d;
              result= length * breadth;
               cout<<"Area of rectangle:"<< result <<endl;
            }
             Area(float r){
                 radius =r;
                 result = 2*3.14* radius;
                  cout<<"Area of circle :"<< result <<endl;

             }
                  Area(int l, int b, int h){
                    length=l;
                    breadth=b;
                    height=h;
                    result= length*breadth*height;
                    cout<<"Area of cube :"<<result<<endl;
                

                  }
                };

    int main (){
        Area a1;


        int len,wid , hgt;
        float rad;

        cout<<"enter the length of the square :";
        cin>>len;


        Area a2(len);
                cout<<"enter the length & breadth of the rectangle:";
        cin>>len>>wid;

         Area a3(len,wid);
                cout<<"enter the radius of circle:";
        cin>> rad;
         
         Area a4(rad);
                cout<<"enter the length , breadth & height of the cube:";
        cin>>len>>wid>>hgt;

             Area a5(len,wid,hgt);

    

        

           
    }