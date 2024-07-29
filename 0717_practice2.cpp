#include <iostream>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int gcd(int a, int b){

    int bigger, smaller;

    if (a > b){
        bigger = a;
        smaller = b;
    }
    else {
        bigger = b;
        smaller = a;
    }

    while ((bigger != 0) && (smaller != 0)){
        bigger = bigger - smaller;
        if (bigger < smaller){
            swap(bigger, smaller);
        }
    }
    return bigger;

}


int main(){
    
    int n1, n2;
    
    cout << "Please input two interger: ";
    cin  >> n1 >> n2;
    
    cout << "GCD is " << gcd(n1, n2) << endl;

    /*cout << n1 << ", " << n2 << endl;
    swap(n1, n2);
    cout << "after swap: " << n1 << ", " << n2 << endl;
    */
    return 0;
}