
#include<iostream>
using namespace std;

class Teacher{
    private:   // by deafult all the data numbers of the class comes under private acess specifier 
    string branch;
    public:
        string name, qualification;
        int experience;
          Teacher(){
            branch="AIMl";
            name = "Pradeep";
            qualification = "M.tech";
            experience = 5;
            cout<<"Welcome,  Pradeep !" <<endl;


          }

              void setData(string Tname, string Tbranch, string Tqual, int exp ){
        name= Tname;
        branch=Tbranch;
        qualification= Tqual;
        experience= exp;

      }


          Teacher(string TeacherName , string TeacherBranch , string TeacherQual, int TeacherExp){
            setData(TeacherName ,  TeacherBranch , TeacherQual,  TeacherExp);
        cout<<"Welcome, "<< name << "  to  " << branch<<"."<<endl;
         cout<<"  you've graduated with, "<<  qualification << " degree. And you're " <<  experience <<" years of  experience"<<endl;




     }
      Teacher(Teacher &t){
        name= t.name;
        branch= t.branch;
        qualification = t.qualification;
        experience = t.experience;


      }
      void getData(){
         cout<<"Welcome, "<< name << " to " << branch<<"."<<endl;
         cout<<"  you've graduated with, "<<  qualification << " degree. And you're " <<  experience <<" years of  experience."<<endl;

      }

      ~Teacher(){
         cout << "Object's work is done , Clearing the memory !"<< endl;

      }


      
};

int main(){
    string n,q,b;
    int e;
     Teacher teacher1;

     cout<<"Enter your name, qualification, branch & experience:" ;
     cin >> n>> q>> b>> e;
      
      Teacher teacher2(n, b,q,e);
       
      Teacher teacher3 = teacher2;
      teacher3.getData();




}
