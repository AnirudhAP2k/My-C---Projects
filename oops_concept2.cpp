#include<iostream>
#include<string>

using namespace std;

class Employee{
    string s;
    public:
            void read();
            void check_bin();
            void one_compliment();
            void display();
} ep;
void Employee::read(){
    cout<<"Enter the bin code"<<endl;
    cin>>s;
}
void Employee::check_bin(){
        for(int i=0;i<s.length();i++){
            if((s.at(i)!='0')&&(s.at(i)!='1')){
            cout<<"String is not bin"<<endl;
            exit(0);
        }
    }
}
void Employee::one_compliment(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0')
        s.at(i)='1';
        else
        s.at(i)='0';
    }
}
void Employee::display(){
    cout<<s<<endl;
}

int main(){
    ep.read();
    ep.check_bin();
    cout<<"String before ones compliment"<<endl;
    ep.display();
    ep.one_compliment();
    cout<<"String after ones compliment"<<endl;
    ep.display();
    return 0;
}