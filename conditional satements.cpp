#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if (age<18)
    {
        cout<<"You cannot come to the party"<<endl;
    }
    else if (age==18)
    {
        cout<<"You will get a kid pass for party"<<endl;
    }
    else{
        cout<<"You can come to party"<<endl;
    }
    return 0; 
}