#include <iostream>
#include <fstream>
using namespace std;
int main() {
    float max=0, array[5];
    ifstream data;
    data.open ("c:\\data", ios::in);
    if (!data.is_open())
       cout<<"oh noes! file not found."<<endl;
    for (int i=0; i<5; i++) {
        data>>array[i];
        cout<<array[i]<<endl;
        if (array[i] > max)
           max = array[i];
    }
    data.close();
    cout<<endl<<"The largest value was "<<max<<endl;
    system ("pause");
    return 0;
}
