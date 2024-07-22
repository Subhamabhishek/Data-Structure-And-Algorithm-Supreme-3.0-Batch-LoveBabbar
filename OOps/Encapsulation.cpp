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

    private:
        float *gpa;
        string gf;

    public: 
        
        //constructor--default --if we are not calling tab bhi it can call it self
        Student(){
            cout<<"Student default constructor"<<endl;
            // cout<<this->name<<" Student default constructor"<<endl;
        }

        //parametrized constructor

        Student(int id, int age, string name, int nos, float gpa, string gf){
            cout<<"Student parameterized constructor"<<endl;

            //syntax
            this->id = id; //this--shows current object so this keyword se iss jo parameter se id ayi usse fetch karo                    
            this->age= age;
            this->name=name;
            this->nos=nos; 
            this->gpa = new float(gpa); 
            this->gf = gf;       //can acess in same class but not ouside the class    
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

    private:
        void gfchatting(){
            cout<<this->name<<" chatting with gf" <<endl;
        }

};


int main(){

    Student A(1, 12, "rahul", 5, 7.8, "smruti");

    cout<<A.age<<endl;
    //cant access cout<< A.gf<<endl;
    //not A.gfchatting();

    return 0;
}
