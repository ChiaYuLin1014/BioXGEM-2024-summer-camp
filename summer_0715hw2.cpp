#include <iostream>

using namespace std;


int main(){
    while(true){
        int n1, n2, sum;

        cout << "Number 1: ";
        cin >> n1;
        cout << "Number 2: ";
        cin >> n2;

        if (n1 > n2){
            cout << "Error!! Number 1 > Number 2!!" << endl;
        }
        else{
            char rerun;
            sum = 0;

            for (int i = n1; i < n2 + 1; i++){
                sum += i;
            }

            cout << "Sum = " << sum << endl;
            cout << "Again(Y/N)?? ";
            cin >> rerun;

            if (rerun == 'n'){
                break;
            }
        }

    }
    
    return 0;
}