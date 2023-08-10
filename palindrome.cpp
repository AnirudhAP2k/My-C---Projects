#include<iostream>
using namespace std;
int main(){
    int a=0;
    int result=0;
    cout<<"Enter the no"<<endl;
    cin>>a;
    int b=a;
    while(b>0){
        int rem=b%10;
        result=result*10+rem;
        b=b/10;
    }
    if(a==result)
    cout<<"Palindrome"<<endl;
    else
    cout<<"Not Palindrome"<<endl;
    return 0;
}