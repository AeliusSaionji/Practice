#include <iostream>
using namespace std;
int main() {
    int run;
    float xstart, xstop, xinc, xcount;
    cout<<"This program evaluates the polynomial Y=X^3-2X+10. Input a starting, stopping, and increment value for X"<<endl;
    cin>>xstart>>xstop>>xinc;
    xcount = ((xstop-xstart)/(xinc));
    run = 0;
    do {
        cout<<"Y="<<((xstart*xstart*xstart)-(2*xstart)+10)<<"\t";
        xstart = (xstart+xinc);
        run++;
        if (run % 3 == 0)
           cout<<endl;
    }
    while (run <= xcount);
    cout<<endl;
    system("pause");
    return 0;
}
