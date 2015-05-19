#include <iostream>
using namespace std;
int main() {
	cout<<"This program will average 10 test grades. Input 10 test grades"<<endl;
	int x;
	float avgrades[11];
	for (x=0; x<10; x++)
		cin>>avgrades[x];
	cout<<endl<<"You input:"<<endl;
	for (x=0; x<10; x++) {
		cout<<avgrades[x]<<endl;
		avgrades[10] = avgrades[10] + avgrades[x];
	}
	//I made the array have 11 slots rather than making a new variable for the average
	cout<<endl<<"The average is: "<<(avgrades[10]/10)<<endl;
	system("pause");
	return 0;
}
