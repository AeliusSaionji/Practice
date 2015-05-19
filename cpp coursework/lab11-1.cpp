#include <iostream>
using namespace std;
int main() {
    float xstart, xstop, xinc;
    cout<<"This program evaluates the polynomial Y=5x^3-2x^2+6x-5"<<endl<<"Input the start, stop, and increment values for x"<<endl;
    cin>>xstart>>xstop>>xinc;
    for (xstart; xstart <= xstop; xstart = xstart + xinc) {
        cout<<"Y="<<((5*xstart*xstart*xstart)-(2*xstart*xstart)+(6*xstart)-5)<<endl;
    }
    system("pause");
    return 0;
}
