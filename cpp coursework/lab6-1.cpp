//Lab 6 - Problem 1
#include<iostream>
using namespace std;

int main()
{//variables defined here
int firstnum, secondnum, sum;
char exit_variable;

//data input section
cout<<"enter a value for x";
cin>>firstnum;
cout<<"enter a value for y";
cin>>secondnum;

//math stuff
sum=firstnum+secondnum;

//data output section
cout<<"This is a really simple program that doesn't do much";
cout<<"\nthe sum of firstnum and secondnum is "<<sum<<"\n";
cout<<"\n press the letter E to exit";
cin>>exit_variable;
//that's the end
}
