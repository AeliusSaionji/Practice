#include <iostream>
using namespace std;
int main() {
    float r;
    cout<<"Input a value for R: ";
    cin>>r;
    if (r<120)
       cout<<endl<<"S: "<<17000-(.485*r*r)<<endl;
    else
       cout<<"S: "<<(18000)/(1+((r*r)/(18000)))<<endl;
    system("pause");
    return 0;
}
