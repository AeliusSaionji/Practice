#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float magnitude,angle;
    cout<<"Enter the magnitude of the resultant force and the angle this force makes with the x axis"<<endl;
    cin>>magnitude>>angle;
    cout<<"R: "<<magnitude<<endl<<"Angle: "<<angle<<endl<<"X Component: "<<magnitude*cos(angle*(3.14/180))<<endl<<"Y Component: "<<magnitude*sin(angle*(3.14/180))<<endl;
    system("pause");
    return 0;
}
