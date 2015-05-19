//Lab 6 - Problem 2
#include<iostream>
using namespace std;

int main()
{//variables defined here
int age;
char NAME[10], e;

//data input
cout<<"enter your first name please.  No more than 9 characters";
cin>>NAME;
cout<<"enter your age.  Whole numbers please";
cin>>age;

//data output
cout<<"hello "<<NAME<<"  You will be "<<(age+10)<<" years old in the year 2018";
cout<<"\n press the letter E to exit";
cin>>e; 
//end of program
}
