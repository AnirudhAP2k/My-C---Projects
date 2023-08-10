#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
string armstrong(int ar[]){
        int s=*ar;
        int m=s;
        int n=0;
        while(s!=0){
            int a=s%10;
            n=n+powf(a,3);
            s=s/10;
        }
        if(n==m)
        return "ARMSTRONG";
        else
        return "NOT ARMSTRONG";
    }
int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int i=0;
    while(t--){
        string str=armstrong((arr+i));
        cout<<str<<endl;
        i++;
    }
    return 0;
}
