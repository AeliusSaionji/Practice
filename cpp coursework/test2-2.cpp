#include <iostream>
using namespace std;

int main() {
    int selection;
    cout<<"Select which you would like to calculate the perimeter of:"<<endl<<"1. Rectangle"<<endl<<"2. Triangle"<<endl<<"3. Square"<<endl;
    cin>>selection;
    switch (selection) {
           case (1): {
                float x,y;
                cout<<"Type the values for X the Y"<<endl;
                cin>>x>>y;
                cout<<"The perimeter is "<<(2*x)+(2*y)<<"\tInput for X: "<<x<<"\tInput for Y: "<<y<<endl;
                break;
                }
           case (2): {
                float a,b,c;
                cout<<"Type the values for a, b, and c"<<endl;
                cin>>a>>b>>c;
                cout<<"The perimeter is "<<a+b+c<<"\tInput for a: "<<a<<"\tInput for b: "<<b<<"\tInput for c: "<<c<<endl;
                break;
                }
           case (3): {
                float x;
                cout<<"Type the value for X"<<endl;
                cin>>x;
                cout<<"The perimeter is "<<x+x+x+x<<"\tInput for X: "<<x<<endl;
                break;
                }
           default: cout<<"No valid selection"<<endl;
    }
    system("pause");
    return 0;
}
