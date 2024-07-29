#include <iostream>

using namespace std;

int main(){

    int year;

    cout << "Please input a year: ";
    cin >> year;

    if (year % 400 == 0){
        cout << year << " is a leap year." << endl;
    }
    else if ((year % 4 == 0) && !(year % 100 == 0)){
        cout << year << " is a leap year." << endl;
    }
    else if (!(year % 4 == 0)){
        cout << year << " is not a leap year." << endl;
    }
    else if((year % 100 == 0) && !(year % 400 == 0)){
        cout << year << " is not a leap year." << endl;
    }



    return 0;
}