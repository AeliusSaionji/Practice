#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a,b,c;
    cout<<"Insert coefficients a, b, and c of a quadratic"<<endl;
    cin>>a>>b>>c;
    if (((b*b)-(4*a*c))<0)
       cout<<"No real solutions exist."<<endl;
    else if ((b*b)-(4*a*c)==0)
       cout<<"X = "<<-b/(2*a)<<endl;
    else
       cout<<"X = "<<-b + sqrt(b*b-4*a*c)/(2*a)<<endl<<"X = "<<-b - sqrt(b*b-4*a*c)/(2*a)<<endl;
    system("pause");
    return 0;
}
