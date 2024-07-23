#include<iostream>
#include<string>

using namespace std;

class Vehicle{

public:
    string name; //all are private by default // if we want private then write private: explicitly
    string model;
    int noOfTyres;

//writing parameterized contsructor

    Vehicle(string _name, string _model, int _noOfTyres){
        cout<<"I am inside vehicle ctor"<<endl;
        this->name = _name;
        this->model = _model;
        this->noOfTyres = _noOfTyres;
    }

public:
    void start_engine(){
        cout<<"Engine is starting "<< name<<" "<<model<<endl;
    }
    void stop_engine(){
        cout<<"Engine is stopping "<< name<<" "<<model<<endl;
    }

};

//child class

class Car : public Vehicle{
public:
    int noOfDoor;
    string transmissionType;

//writing parameterized contsructor
//vehicle ki properties hai woh car mein hei so vehcle specific properties should also be initialized in car

//here hamesa pehle base class ke corresponding properties initialize hongi and then child ke corresponding properties initialize hongi
           /////////SYNTAX/////////
    Car(string _name, string _model, int _noOfTyres, int _noOfDoors, string _transmissionType) : Vehicle(_name, _model, _noOfTyres){
        cout<<"I am inside car ctor"<<endl;
        
        this->noOfDoor = _noOfDoors;
        this->transmissionType = _transmissionType;
    } // with this constructor it is specifing that car is a vehicle

    void startAc(){
        cout<< "Ac has started of  "<< name <<endl; //name variable Vehicle se car inherit kia haii 
    }

};
int main(){
    Car A("Marui800", "LXI", 4, 4, "Manual" );
    A.start_engine();
    A.startAc();
    A.stop_engine();

    int arr[3];
    fill(arr,arr+8,23);
    for(int i=0; i<10; i++){
        cout<<arr[i]<<endl;
    }
    cout<<arr[7];


    return 0;

}