#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int count;
    float vstart, vend, vinc, vcount;
    cout<<"This program calculates the variation of a mass of a particle. Please input the starting velocity."<<endl;
    cin>>vstart;
    cout<<endl<<"Please input the end velocity."<<endl;
    cin>>vend;
    cout<<endl<<"Please input the increment value."<<endl;
    cin>>vinc;
    count = 0;
    vcount = (vend-vstart)/(vinc);
    while (count <= vcount) {
          cout<<"M: "<<1/(sqrt(1-(vstart*2)))<<"\t";
          vstart = (vstart + vinc);
          count++;
          //If the count is divisible by three (every three runs) then create a newline
          if ((count % 3) == 0) {
             cout<<endl;
             }
          }
    cout<<endl;
    system("pause");
    return 0;
}
