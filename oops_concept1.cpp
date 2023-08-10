#include<iostream>

using namespace std;

class Employee{
    private: int a,b;                    //a & b can't be accessed outside class Employee scope as they are private only
    public: int c,d;
    void setNumber(int a1, int b1){     //only a class method can be only used to access private variables
        a=a1;
        b=b1;
    }
    void display(){
         cout<<a<<"\t"<<b<<endl;
    }
} ep;
        /*      void Employee::display(){            //Function can be accessed in this way also:
                cout<<a<<"\t"<<b<<endl;
                 }       */
int main(){
    // Employee ep;                              //Object ep of class Employee can be made like this also:
    int x,y;
    cout<<"Enter the value for a & b : "<<endl;
    cin>>x>>y;
    ep.setNumber(x,y);              
    cout<<"Enter the value for c & d "<<endl;
    cin>>ep.c>>ep.d;                             //c & d are public variables so they can be accessed 
    cout<<"The value of a, b are : ";
    ep.display();
    cout<<"The value of c, d are : "<<ep.c<<"\t"<<ep.d<<endl;
    return 0;
}