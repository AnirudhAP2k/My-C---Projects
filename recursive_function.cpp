#include<iostream>
using namespace std;

int fib(int n){
    if(n<=1)
    return 1;
    return fib(n-2)+fib(n-1);
}
    /*  fib(5)
        fib(4)+fib(3)
        fib(2)+fib(3)+fib(2)+fib(3)     */
 int factorial(int n){
    if(n<=1)
    return 1;
    return n*factorial(n-1);
 }
 /*   factorial(4)=4*factorial(3)
      factorial(4)=4*3*factorial(2)
      factorial(4)=4*3*2*factorial(1)
      factorial(4)=4*3*2*1      */
 int main(){
    int a, b;
    cout<<"Enter the no."<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" is = "<<factorial(a)<<endl;
    cout<<"Enter the term of fibonacci series"<<endl;;
    cin>>b;
    cout<<b<<"th term of fib series is = "<<fib(b)<<endl;

    return 0;
 }