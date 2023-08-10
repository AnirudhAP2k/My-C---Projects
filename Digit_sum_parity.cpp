#include <iostream>
using namespace std;
int digitsum(long a){
    int s=0;
    while(a!=0){
        int x=a%10;
        s=s+x;
        a=a/10;
    }
    return s;
}
long evenparity(long a){                //Or method using function by calling the functions
	        while(1){
            a++;
            int i=digitsum(a);
            if((i%2)!=0){
            return a;
            break;
        }
    }
}
long oddparity(long a){                 //Or method using function by calling the fucntions
	        while(1){
            a++;
            int i=digitsum(a);  
            if((i%2)==0){
            return a;
            break;
        }   
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long n;
        long x;
	    cin>>n;
	    int m=digitsum(n);
        while(1){
            n++;
            if(m%2==0){
                int i=digitsum(n);
                if((i%2)!=0){
                    cout<<n<<endl;
                    break;
                }
            }
            else{
                int i=digitsum(n);
                if(i%2==0){
                    cout<<n<<endl;
                    break;
                }
            }
        }
    }
	return 0;
}