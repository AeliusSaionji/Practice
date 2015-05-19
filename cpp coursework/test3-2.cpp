#include <iostream>
using namespace std;

int sum(int a, int b, int c, int d, int e);
int main() {
    int a, b, c, d, e;
    cout<<"Enter 5 numbers"<<endl;
    cin>>a>>b>>c>>d>>e;
    cout<<"Sum:\t\t"<<sum(a,b,c,d,e)<<endl<<"Average:\t"<<(sum(a,b,c,d,e)/5)<<endl;
    system("pause");
    return 0;
}

int sum(int a, int b, int c, int d, int e) {
    int add;
    add = (a+b+c+d+e);
    return add;
}
