#include <iostream>
using namespace std;

int main()

{
    int num;

    cout<< "Enter your num: ";
    cin >> num;

    if (num>=1)
    {
       cout<< "Number is positive";
    }else if (num==0)
    {
        cout<< "Number is zero";
    }else if (num<0)
    {
        cout<< "Number is negative";
    }
    return(0);

}

