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

void Prime_Factorization(int n){
    
    int k = 2;
    
    while (k < n){
        if (n % k == 0){
            cout << k << " * ";
            n = n / k;
            if (IsPrime(n)){
                break;
            }
        }
        else k++;
    }
    cout << n;
}


int main(){
    
    int n;

    cout << "Please input a interger: ";
    cin >> n;
    cout << n << " = ";

    Prime_Factorization(n);

    return 0;
}