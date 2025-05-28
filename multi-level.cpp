
#include<iostream>
using namespace std;

class  Person{
    private:
        string name;
        int age;

        public: 
        void setPersonDetails(string n, int a){
            name=  n;
            age=a;

        }


         void showPersonDetails(){
            cout<<" My name is "<< name  << "  ,and I'm " << age <<" years old.  "<< endl;
            
        }
    
};



class Employee: public Person{
    private:
    string company_name,emp_id;
    public:
        void setEmployeeDetails(string  compName, string empId){
            company_name = compName;
            emp_id = empId;


        }
        void showEmployeeDetails(){
            cout<<"  i'm working in  "  << company_name<< " , My Employee ID is " << emp_id <<endl;
           }
    };

     class Developer : public  Employee{ // person_> employee -> Developer   
        private:
            string deptName;
            int exeperience;


            public:
            void setDeveloperDetails(string dept_name, int exp){
                deptName = dept_name;
                exeperience = exp;
            }
            
            void showDeveloperDetails(){
                cout<< "I 'll be working in "<< deptName<< "department. I've" << exeperience<< "years of exeperience."<<endl;

            }
            
};



int main(){
    string personName, companyName , dept_name, employee_id;
    int personage , devExperience;

    cout  << "Enter your Name & Age :";
    cin  >> personName>> personage ;
     
      cout << "Enter your Name & Age :";
    cin >> companyName>> employee_id ;

      cout << "Enter your Name & Age :";
    cin >> dept_name >> devExperience ; 




    Developer dev1; ///object 
    // dev1.name cannot acces private  members out of teh class (person)


    dev1.setPersonDetails(personName, personage );

    dev1.setEmployeeDetails(companyName, employee_id );

    dev1.setDeveloperDetails(dept_name, devExperience );



    dev1.showPersonDetails();
    dev1.showEmployeeDetails();
    dev1.showDeveloperDetails();


}



