#include <iostream>

using namespace std;

int main(){
    
    int sec, sec_2, sec_3, min, hr;

    cout << "Please input # of seconds: ";
    cin >> sec;

    hr = sec / 3600;
    sec_2 = sec % 3600;
    min = sec_2 / 60;
    sec_3 = sec_2 % 60;

    cout << hr << " hour " << min << " minute " << sec_3 << " second";


    return 0;
}