#include <iostream>
using namespace std;

float eval(float xstart, float xstop, float xinc);
int main() {
    float xstart, xstop, xinc, y;
    cout<<"This program evaluates Y=x^4-3x^2+15. Enter a starting, stopping, and increment value for X."<<endl;
    cin>>xstart>>xstop>>xinc;
    cout<<endl;
    y = eval(xstart,xstop,xinc);
    cout<<endl<<"The last y value is: "<<y<<endl;
    system("pause");
    return 0;
}

float eval(float xstart, float xstop, float xinc) {
      float y;
      cout<<"X\tY"<<endl;
      while (xstart <= xstop) {
            cout<<xstart<<"\t"<<((xstart*xstart*xstart*xstart)-(3*xstart*xstart)+15)<<endl;
            y = ((xstart*xstart*xstart*xstart)-(3*xstart*xstart)+15);
            xstart = (xstart + xinc);
      }
      return y;
}
