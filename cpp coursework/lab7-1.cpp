#include <iostream>
using namespace std;

int main() {
    float mass, velocity;
    cout<<"Input mass (kg), then velocity (m/s)"<<endl;
    cin>>mass>>velocity;
    cout<<"Mass: "<<mass<<"kg"<<endl<<"Velocity: "<<velocity<<"m/s"<<endl<<"Kinetic Energy: "<<0.5*mass*velocity*velocity<<"kg*m/s"<<endl;
    system("pause");
    return 0;
}
    
