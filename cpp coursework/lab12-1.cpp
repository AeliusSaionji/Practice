#include <iostream>
using namespace std;
int main() {
    int i; //i for iteration
    float data[15][1],smooth[15][1];
    cout<<"Input 15 values that will be \"smoothed\""<<endl;
    for (i=0; i<15; i++)
        cin>>data[i][0];
    smooth[0][0] = data[0][0];
    smooth[14][0] = data[14][0];
    for (i=1; i<14; i++)
        smooth[i][0] = ((data[i-1][0] + data[i][0] + data[i+1][0])/3.f);
    cout<<"Smoothed results"<<endl;
    for (i=0; i<15; i++)
        cout<<i+1<<": "<<smooth[i][0]<<endl;
    system("pause");
    return 0;
}
