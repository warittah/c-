#include <iostream>
using namespace std;

int main()
{
    int score = 0;

    cout << "Enter you score: ";
    cin>> score;

    if (score>=80 && score<=100){
        cout<< " A ";
    }else if (score>=70 && score<=79){
        cout<< " B ";
    }else if (score>=60 && score<=69){
        cout<< " C ";
    }else if (score>=50 && score<=59){
        cout<< " D ";
    }else if (score<=49){
        cout<< " F ";
    }
    return(0);
    
} 