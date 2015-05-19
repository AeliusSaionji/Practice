#include <iostream>
using namespace std;
int main() {
	int x;
	float fahr[5], cels[5];
	cout<<"This program converts 5 fahrenheit temperatures to celsius"<<endl;
	for (x=0; x<5; x++) {
		cout<<"Input a temperature in fahrenheit"<<endl;
		cin>>fahr[x];
		//5.f = float... I always forget about int/int=int
		cels[x] = ((fahr[x] - 32)*(5.f/9));
		}
	cout<<"Fahrenheit\tCelsius"<<endl;
	for (x=0; x<5; x++) 
		cout<<fahr[x]<<"\t\t"<<cels[x]<<endl;
	system("pause");
	return 0;
}
