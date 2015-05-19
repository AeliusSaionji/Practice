#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int data[20]={0};
    ifstream values;
    values.open("c:\\users\\link\\downloads\\VALUES.cpp", ios::in);
    if (!values.is_open())
       cout<<"Oh noes!"<<endl;
    for (int i=0; i<20; i++) {
        values>>data[i];
    }
    ofstream answers;
    answers.open("ANSWERS.cpp", ios::out);
    for (int i=0; i<20; i++)
        answers<<data[i]<<endl;
    values.close();
    answers.close();
    system("pause");
    return 0;
}
