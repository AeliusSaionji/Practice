#include <iostream>
using namespace std;

int eval(int x, int y);
int main() {
    int x, y, z;
    cout<<"Input a value for X, then for Y"<<endl;
    cin>>x>>y;
    z = eval(x,y);
    cout<<"X: "<<x<<"\tY: "<<y<<"\tZ: "<<z<<endl;
    system("pause");
    return 0;
}

int eval(int x, int y) {
    int z;
    z = ((3*x)+(4*y));
    return z;
}
