#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() 
{
    int a,b,c;
    cout <<"AX^2 + BX + C =0"<<endl;
    cout <<"Enter number A :";
    cin >>a;
    cout <<"Enter number B :";
    cin >>b;
    cout <<"Enter number C :";
    cin >>c;
    double root, X1, X2;
    cout <<endl;
    cout <<"Answer of " << a <<"X^2 + " << b << "X+" << c <<" = 0" <<endl;

    root = sqrt (b * b - 4 * a * c );
    X1 = (-b + root) / (2 * a);
    X2 = (-b - root) / (2 * a);
    cout <<"Answer 1 = " <<fixed << setprecision (2) << X1 << endl;
    cout <<"Answer 2 = " <<fixed << setprecision (2) << X2 << endl;
    cout <<"Press any key to continue...";
    return (0);



}