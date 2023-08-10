#include<iostream>
using namespace std;
int main(){
    //int a=5;
    //int* b=&a;
    //cout<<b<<endl;
    //cout<<*b<<endl;
    int marks[]={56,67,9,90};
    int *p=marks;
    cout<<*(p)<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    return 0;
}