#include <iostream>
using namespace std;
int main() {
    float a,b,c,d;
    cout<<"Enter four values for lengths to see if they can form a polygon"<<endl;
    cin>>a>>b>>c>>d;
    if (a<b+c+d && b<a+c+d && c<a+b+d && d<a+b+c) {
                if (a==b && b==c)
                   cout<<"These values form a square"<<endl;
                else if (a==b ^ b==c)
                     cout<<"These values form a rectangle"<<endl;
                else
                    cout<<"A polygon can be formed, but it is not a square or rectangle"<<endl;
    }
    else
        cout<<"No polygon can be formed"<<endl;
    system("pause");
    return 0;
}
