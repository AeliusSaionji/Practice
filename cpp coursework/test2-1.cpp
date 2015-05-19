#include <iostream>
using namespace std;

int main() {
    int ph;
    cout<<"Enter a value of pH to be evaluated: ";
    cin>>ph;
    if (ph < 3)
       cout<<endl<<"Solution is very acidic."<<endl;
    if (ph >= 3 && ph < 7)
       cout<<endl<<"Solution is acidic."<<endl;
    if (ph == 7)
       cout<<endl<<"Solution is neutral."<<endl;
    if (ph > 7 && ph < 12)
       cout<<endl<<"Solution is alkaline."<<endl;
    if (ph >= 12)
       cout<<endl<<"Solution is very alkaline."<<endl;
    system("pause");
    return 0;
}
