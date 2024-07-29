#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;


int main(){
    
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int guess[4];
    int n;
    int count = 0;
    
    
    srand(time(0));

    for (int i = 0; i < 20; i++){       // shuffling
        int temp;
        int num = rand() % 10;

        temp = a[i % 10];
        a[i % 10] = a[num];
        a[num] = temp;
    }
    cout << "answer is: ";
    for (int i = 0; i < 4; i++){
        cout << a[i];
    }
    cout << endl;
    
    while(true){
        
        int A = 0;
        int B = 0;

        cout << "Please input four digits (0~9): ";
        cin >> n;
        count ++;

        guess[0] = n / 1000;
        guess[1] = (n % 1000) / 100;
        guess[2] = (n % 100) / 10;
        guess[3] = n % 10;

        for (int i = 0; i < 4; i++){
            if (guess[i] == a[i]){
                A++;
            }
            else{
                for (int j = 0; j < 4; j++){
                    if (guess[i] == a[j]){
                        B++;
                    }
                }
            }
        }

        if(A == 4){
            cout << "You got it!! " << count << " times!!";
            break;
        }
        else{
            cout << "The result is " << A << "A " << B << "B" << endl; 
        }
    }


    return 0;
}