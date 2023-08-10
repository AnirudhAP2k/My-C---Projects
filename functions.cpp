#include <iostream>
using namespace std;

int sum(int a, int b);     //Function Prototype
void g();

int main(){
    int num1, num2;
    cout<<"Enter the first no."<<endl;
    cin>>num1;
    cout<<"Enter the second no."<<endl;
    cin>>num2;
    cout<<"The sum is : "<<sum(num1, num2)<<endl;
    g();
    return;
}

int sum(int a, int b){          //Funtion
    int c=a+b;
    return c;
}      
void g(){
    cout<<"\nHello";
}