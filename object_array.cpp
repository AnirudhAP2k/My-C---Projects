#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setid(){
            salary=122;
            cout<<"Enter the id of emp"<<endl;
            cin>>id;
        }
        void getid(){
            cout<<"The id of this emp is "<<id<<endl;
        }
};

int main(){
    //Employee harry, rohan, lavish, shruti;
    //harry.setid();
    //harry.getid();
    Employee fb[4];
    for(int i=0;i<4;i++){
        fb[i].setid();
        fb[i].getid();
    }
    return 0;
}