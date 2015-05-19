#include <iostream>
using namespace std;
int main() {
    int array[4][3], avg[3] = {0}, i, l, j = 0, odd = 1;
    cout<<"Multidimensional array values"<<endl;
    for (i=0; i<4; i++)
        for (l=0; l<3; l++) {
            array[i][l] = odd;
            odd = (odd + 2);
            avg[j] = (array[i][l] + avg[j]);
            cout<<array[i][l]<<"\t";
            if (odd == 7 ^ odd == 13 ^ odd == 19 ^ odd == 25) {
               j++;
               cout<<endl;
            }
        }
    cout<<endl<<"Average of columns"<<endl;
    for (i=0; i<3; i++)
        cout<<(avg[i]/3)<<endl;
    system("pause");
    return 0;
}
