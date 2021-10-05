#include <iostream>
using namespace std;
int main()
{
    int year,maxday;
    cout << "\nEnter year : ";
    cin >> year;
    if ( (year % 4) == 0) {
        cout << "\nEnter year";
        maxday = 29;
    }
    else {
        cout << "ln" << year << "is not laeap year";
        maxday = 28;
    }
    cout << "and February has" << maxday << "day.\n";
    return(0);

    
}