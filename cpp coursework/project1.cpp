#include <iostream>
#include <string>
using namespace std;
int main() {
    float max,classes,tests,week;
    string forecast;
    cout<<"This program will calculate the number of cars parked at HVCC for any given time."<<endl;
    cout<<"Please provide the following data: "<<endl;
    cout<<"The semester week: ";
    cin>>week;
    cout<<"Weather Forecast (\"Good\" or \"Rainy\"): ";
    cin>>forecast;
    cout<<"Number of tests scheduled: ";
    cin>>tests;
    cout<<"Number of classes scheduled that hour: ";
    cin>>classes;
    max=(classes*24)/1.02;
    cout<<endl<<"Maximum number of cars: "<<max<<endl<<endl;
    if (tests>=15 && tests<=30)
         max=max-(.15*(24*classes));
    else if (tests>30)
         max=max-(.1*(24*classes));
    else if(tests<0)
         cout<<"You have entered an invalid value for tests. Assuming less than 15..."<<endl;
    else
         cout<<"Tests have no impact on the number of cars."<<endl;
    if (forecast=="Good")
         if (week>=1 && week<=4)
            max=max-((1/10)*((.12*classes)+(classes/1.02)));
         else if (week>=5 && week<=11)
            max=max-((3/5)*((.12*classes)+50));
         else if (week>=12 && week<=16)
            max=max-((1/5)*classes);
         else {
            cout<<"Input for the semester week is invalid."<<endl;
            system("pause");
            return 1;
         }    
    else if (forecast=="Rainy")
         if (week>=1 && week<=4)
            max=max+0;
         else if (week>=5 && week<=11)
            max=max-(classes+((1/4)*classes))/(.03*classes);
         else if (week>=12 && week<=16)
            max=max-(classes*.05);
         else {
            cout<<"Input for the semester week is invalid."<<endl;
            system("pause");
            return 1;
         }
    else {
         cout<<"Input for forecast is invalid."<<endl;
         system("pause");
         return 1;
    }
    cout<<"The number of cars in the lot is estimated to be: "<<max<<endl<<endl<<"Input values: "<<endl<<"Forecast: "<<forecast<<"\tSemester week: "<<week<<"\tNumber of tests: "<<tests<<endl;
    system("pause");
    return 0;
}
            
