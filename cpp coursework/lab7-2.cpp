#include <iostream>
using namespace std;
int main() {
    float r1,r2;
    cout<<"Enter two values to be used for resistance"<<endl;
    cin>>r1>>r2;
    cout<<"R1: "<<r1<<endl<<"R2: "<<r2<<endl<<(r1*r2)/(r1+r2)<<endl;
    system("pause");
    return 0;
}
