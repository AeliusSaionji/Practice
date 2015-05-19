#include <iostream>
#include <vector>
using namespace std;
int main() {
    int count, i, number;
    cout<<"This program averages a series of numbers. Enter the number of integers you wish to average."<<endl;
    cin>>number;
    count = 0;
    vector<int> average (number);
    for (i=0; i < average.size(); i++) {
        cout<<"Enter the data."<<endl;
        cin>>average.at(i);
        }
    for (i=0; i < average.size(); i++) {
        cout<<endl<<average.at(i)<<" "<<endl;
        count = (average.at(i) + count);
        }
    cout<<endl<<"The average is "<<(count/average.size())<<endl<<"Number of values entered; "<<average.size()<<endl;
    system("pause");
    return 0;
}
