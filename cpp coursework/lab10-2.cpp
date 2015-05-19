#include <iostream>
using namespace std;
int main() {
    int select, run;
    float xstart, xstop, xinc, xcount;
    cout<<"Choose one of the following polynomials."<<endl<<"1. Y=X^3-2X+10"<<endl<<"2. Y=X4+3X2-15"<<endl<<"3. Y=X2-10"<<endl;
    cin>>select;
    cout<<"Input a starting, stopping, and increment value for X"<<endl;
    cin>>xstart>>xstop>>xinc;
    xcount = ((xstop-xstart)/(xinc));
    run = 0;
    switch (select) {
           case (1): {
                    do {
                        cout<<"Y="<<((xstart*xstart*xstart)-(2*xstart)+10)<<"\t";
                        xstart = (xstart+xinc);
                        run++;
                        if (run % 3 == 0)
                           cout<<endl;
                    }
                    while (run <= xcount);
                break;
           }
           case (2): {
                do {
                        cout<<"Y="<<((xstart*xstart*xstart*xstart)+(3*xstart*xstart)-15)<<"\t";
                        xstart = (xstart+xinc);
                        run++;
                        if (run % 3 == 0)
                           cout<<endl;
                    }
                    while (run <= xcount);
                break;
           }
           case (3): {
                do {
                        cout<<"Y="<<((xstart*xstart)-10)<<"\t";
                        xstart = (xstart+xinc);
                        run++;
                        if (run % 3 == 0)
                           cout<<endl;
                    }
                    while (run <= xcount);
                break;
           }
           default: {
                cout<<"Invalid selection."<<endl;
           }
    }
    cout<<endl;
    system("pause");
    return 0;
}
