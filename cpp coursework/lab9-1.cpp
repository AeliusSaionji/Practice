#include <iostream>
using namespace std;
int main(){
    int choice;
    cout<<"Choose which area to calculate: \n1: Circle\n2: Rectangle\n3: Triangle\n4: Trapezoid\n";
    cin>>choice;
    if (choice == 1) { 
               float radius;
               cout<<"Input the radius: ";
               cin>>radius;
               cout<<"\nThe area of the circle is "<<3.14*radius*radius<<"\tInput radius: "<<radius;
    }
    else if (choice == 2) {
               float x,y;
               cout<<"\nInput the lengths X and Y: ";
               cin>>x>>y;
               cout<<"\nThe area of the rectangle is "<<x*y<<"\tInput lengths X and Y: "<<x<<"\t"<<y;
    }
    else if (choice == 3) {
               float base,height;
               cout<<"\nInput the length of the base and the height: ";
               cin>>base>>height;
               cout<<"\nThe area of the triangle is :"<<.5*base*height<<"\tInput base and height: "<<base<<"\t"<<height;
    }
    else if (choice == 4) {
               float base1,base2,height;
               cout<<"\nInput the length of the two bases and the height :";
               cin>>base1>>base2>>height;
               cout<<"\nThe area of the trapezoid is :"<<height*((base1+base2)/2)<<"\tInput bases and height: "<<base1<<"\t"<<base2<<"\t"<<height;
    }
    else
        cout<<"\nError; invalid input.";
    cout<<endl;
    system("pause");
    return 0;
}
