#include <iostream>
using namespace std;
int main() {
    int a[5][3]={0}, b[3]={1,2,3}, c[5]={0}, d[3], count=2; //Zeroing c array to save me a headache
    cout<<"a:"<<endl;
    for (int i=0; i<5; i++) {
        for (int l=0; l<3; l++) {
            a[i][l] = count;
            cout<<a[i][l]<<"\t";
            count = (count + 2);
        }
        cout<<endl;
    }
    cout<<endl<<"b:"<<endl<<b[0]<<"\t"<<b[1]<<"\t"<<b[2]<<endl<<endl<<"c:"<<endl;
    for (int i=0; i<5; i++) {
        for (int j=0; j<3; j++) {
            d[j] = a[i][j]*b[j];
            c[i] = d[0]+d[1]+d[2];
        }
        cout<<c[i]<<endl;
    }
    system("pause");
    return 0;
}
