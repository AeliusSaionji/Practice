#include <iostream>
using namespace std;

int main() {
    float v1,v2,v3,v4,v5,v6; 
    cout<<"Enter six values sequentially."<<endl;
    cin>>v1>>v2>>v3>>v4>>v5>>v6;
    cout<<"x: "<<v1<<"\ty: "<<(9.0/5)*(v1*v1)-(1.0/2*v1)+2<<endl<<"x: "<<v2<<"\ty: "<<(9.0/5)*(v2*v2)-(1.0/2)*v2+2<<endl<<"x: "<<v3<<"\ty: "<<(9.0/5)*(v3*v3)-(1.0/2)*v3+2<<endl<<"x: "<<v4<<"\ty: "<<(9.0/5)*(v4*v4)-(1.0/2)*v4+2<<endl<<"x: "<<v5<<"\ty: "<<(9.0/5)*(v5*v5)-(1.0/2)*v5+2<<endl<<"x: "<<v6<<"\ty: "<<(9.0/5)*(v6*v6)-(1.0/2)*v6+2<<endl;
    system("pause");
    return 0;
}
