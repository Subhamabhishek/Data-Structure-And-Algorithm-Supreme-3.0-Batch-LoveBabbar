#include <iostream>
#include <string>

using namespace std;

class Student{
    public: 
        //Attributes
        int id;
        int age;
        string name;
        int nos;
        int *gpa;

        //constructor--default --if we are not calling tab bhi it can call it self
        Student(){
            cout<<"Student default constructor"<<endl;
            // cout<<this->name<<" Student default constructor"<<endl;
        }

        //parametrized constructor

        Student(int id, int age, string name, int nos, float gpa){
            cout<<"Student parameterized constructor"<<endl;

            //syntax
            this->id = id; //this--shows current object so this keyword se iss jo parameter se id ayi usse fetch karo                    
            this->age= age;
            this->name=name;
            this->nos=nos; 
            this->gpa = new int(gpa);           
        }

        //copy constructor
        Student(const Student &srcobj){ //scrcobj signifies A and it is called by ref
            cout<<"Student copy constructor"<<endl;

            //syntax for copy constructor
            this->id = srcobj.id; //this--shows current object i.e-C so this keyword se iss jo parameter se id ayi usse fetch karo                    
            this->age = srcobj.age;
            this->name = srcobj.name;
            this->nos = srcobj.nos;            
        }

        //behaviour/ methods/ functions
        void study(){
            cout<<this->name<<" Studing"<<endl;
        }
        void sleep(){
            cout<<this->name<<" sleeping"<<endl;
        }
     
        void bunk(){
            cout<<this->name<<" Bunking"<<endl;
        }

        //destructor-- default-- if we are not calling it can call it self bt best practice is to call both constructor and destructor
        ~Student(){
            cout<<"Student default destructor"<<endl;
            // cout<<this->name<<" Student default destructor"<<endl;
            delete this->gpa; //dynamic destructor
        }
};


int main(){

    // Student A; //calling object
    // A.id = 1;
    // A.age=15;
    // A.name="Renu";
    // A.nos =6;

    // A.study();

    // Student B; //calling another student object B
    // B.id = 2;
    // B.age=15;
    // B.name="Rahul";
    // B.nos =7;
    // B.bunk();
    
    //parametrize calling
    // Student A(1,15,"Renu", 8);  //stack
    // Student B(1,16,"Rahul", 5);
    // Student C(1,17,"Reymond", 7);
    // Student D(1,18,"R0naldo", 3);

    // cout<<A.name<<" "<<A.age<<endl;
    // A.bunk();
    // B.study();

    //copy constructor;
    // Student C = A; 
    //can also do 
    // Student C(A);

    // cout<<C.name<<" "<<A.name<<endl;

    //Dynamic allocation or student pointer;--destructor is not automatically calling so we have to call it separately
    Student *A = new Student(1, 14, "Babbar", 7, 9.8);
    cout<< A->name <<endl;
    cout<< A->age <<endl;
    
    A->study();
    delete A;

    return 0;
}
