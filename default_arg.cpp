#include <iostream>
using namespace std;
float moneyreceived(int current, float factor = 0.1)
{ // factor is default argument
    return current * factor;
}
int main()
{
    int money = 100000;
    cout << "The total money received is = " << moneyreceived(money) << endl; // if no value given to default argument, it takes the default value assigned to it
    return 0;
}