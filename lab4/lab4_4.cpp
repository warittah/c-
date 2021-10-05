#include <iostream>
#include <string>

using namespace std;
int main()

{
    int LeftOperand, RightOperand;
    int Result;
    char  Operator;

    cout<< "Please enter a simple expression ";
    cout << "(number operator number) : ";
    cin >> LeftOperand >> Operator >> RightOperand;
    if (Operator == '+'){
        Result = LeftOperand + RightOperand;
    }else if (Operator == '-'){
        Result = LeftOperand - RightOperand;
    }else if (Operator == '*'){
        Result = LeftOperand * RightOperand;
    }else if (Operator == '/'){
        Result = LeftOperand / RightOperand;
    }else{
        cout << Operator << "is unrecognized operatio";
        cout << endl;
        return(1);
    }

     


}