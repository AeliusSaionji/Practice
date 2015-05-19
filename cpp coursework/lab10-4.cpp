#include <iostream>
using namespace std;
int main() {
    float tstart, tstop, tinc, velocity;
    cout<<"This program evaluates the velocity of a particle. Input the start, stop, and increment values for time."<<endl;
    cin>>tstart>>tstop>>tinc;
    for (tstart; tstart<= tstop; tstart = tstart + tinc) {
        cout<<"V="<<((3*tstart*tstart) - (12*tstart) - 15)<<endl;
        velocity = ((3*tstart*tstart) - (12*tstart) - 15);
        if ((velocity > (-1)) && (velocity < 1)) {
            cout<<"The above velocity value is almost zero"<<endl;
            system("pause");
            return 0;
        }
    }
    system("pause");
    return 0;
}
