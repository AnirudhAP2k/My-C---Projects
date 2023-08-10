#include <iostream>
using namespace std;
//                                                  ********Struct*******
 typedef struct employee
 {
    /* data */
    int eid;
    char favAlphabet;
    double sal;
 }ep;
  /*        OR
   struct employee
 {
    int eid;
    char favAlphabet;
    double sal;
 } 
 int main(){
   ep anirudh; 
   // OR struct employee anirudh;
   anirudh.eid=22;
   anirudh.favAlphabet='s';
   anirudh.sal=25000;
   cout<<anirudh.eid<<endl;
   cout<<anirudh.favAlphabet<<endl;
   cout<<anirudh.sal<<endl;            */
    //                                                *******Union*******
    union money{
        int rice;
        int car;
        float pounds;    
    };
   // ******only one of the data can be used(executed) when using union unlike struct and the previous data will be overwritten******
   int main(){
    union money m1;
    m1.rice=22;
    m1.car=77;
    m1.pounds=25000;
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;
    cout<<m1.pounds<<endl;
    return 0;
  }
 