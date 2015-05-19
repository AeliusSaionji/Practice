#include <iostream>
using namespace std;
int main() {
    float x,y,z;
    cout<<"Insert two numbers"<<endl;
    cin>>x>>y;
    z=(3*x*x)-(4*y*y);
    cout<<"X: "<<x<<endl<<"Y: "<<y<<endl<<"Z: "<<z<<endl;
    if (z>=0) 
       cout<<"Z is positive."<<endl;
    else
        cout<<"Z is negative."<<endl;
    system("Pause");
    return 0;
}
