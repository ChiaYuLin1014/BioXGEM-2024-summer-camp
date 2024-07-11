#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int a;

    cout << "Please input a positive integer: ";
    cin >> a;
    if (a < 0){
        cout << a << " is not a positive integer!!"<< endl;
    }
    else if(a >= 1 && a <=9){
        cout << a << " is a small integer" << endl;
    }
    else if(a >= 10 && a <= 99){
        int dig_one = a%10;
        int dig_ten = a/10;

        cout << "The tens digit of " << a << " is " << dig_ten << endl;
        cout << "The units digit of " << a << " is " << dig_one << endl;
    }
    else if(a >= 100){
        cout << a << " is a large integer" << endl;
        if (a % 5 == 0){
            cout << a << " is divisible by 5." << endl;
        }
        else if(a % 5 == 1){
            int add_five = a + 5;
            cout << a << "+5=" << add_five << endl;
        }
        else if(a % 5 == 2){
            int minus_five = a - 5;
            cout << a << "-5=" << minus_five << endl;
        }
        else if(a % 5 == 3){
            int times_five = a * 5;
            cout << a << "*5=" << times_five << endl;
        }
        else {
            float divide_five = a / 5.0;
            cout << fixed << setprecision(2);
            cout << a << "/5=" << divide_five << endl;
        }
    }

    return 0;
}