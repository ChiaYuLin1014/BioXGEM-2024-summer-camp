#include <iostream>

using namespace std;

int main(){

    int n, iter;

    cout << "Please inout a number: ";
    cin >> n;
    iter = n;

    for (int i = 0; i < n; i++){
        for (int j = iter - 1; j > 0; j--){
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++){        // fill in numbers.
            if (j + 1 > 9){
                int k = (j + 1) % 10;
                cout << k;
            }
            else cout << j + 1;
        }
        for (int j = i; j > 0; j--){            // fill in inverse.
            if (j > 9){
                int k = j % 10;
                cout << k;
            }
            else cout << j;
        }
        for (int j = iter - 1; j > 0; j--){     // redundant.
            cout << " ";
        }
        iter--;
        cout << endl;
    }

    return 0;
}