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

int main(){

    int num;

    cout << "Please input a positive interger : ";
    cin >> num;

    if(IsPrime(num)){
        cout << "It is a prime number." << endl;
    }
    else {
        cout << "It is not a prime number." << endl;
    }

    return 0;
}