#include <iostream>

using namespace std;

bool IsPrime(int a){

    int count = 0;

    for (int i = 1; i < a + 1; i++){
        if (a % i == 0){
            count++;
        }
    }
    if (count == 2){
        return true;
    }
    else {
        return false;
    }
}

int Find_TwinPrime(int n){

    int k = 3;
    int total = 0; 

    while (k < n){
        if(IsPrime(k) && IsPrime(k + 2)){
            cout << "(" << k << ", " << k + 2 << ") ";
            total++;
            k = k + 2;
        }
        else k++;
    }
    cout << endl;
    return total;
}


int main(){
    
    int n, total;

    cout << "Please input a number: ";
    cin >> n;

    total = Find_TwinPrime(n);
    cout << "Total is " << total;

    return 0;
}