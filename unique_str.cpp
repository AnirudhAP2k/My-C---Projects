
#include <iostream>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cout<<"Give input"<<endl;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int k;
    cin>>k;
    string dist[k];
    int x=0;
    for(int i=0;i<n;i++){
      int s=0;
        for(int j=0;j<n;j++){
          if(arr[i]==arr[j])
          s++;
        }
        if(s<=1){
        dist[x]=arr[i];
        x++;
        }
    }
    cout<<dist[k-1];
    return 0;
}