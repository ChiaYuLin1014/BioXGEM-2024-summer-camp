#include <iostream>

using namespace std;

int main(){

    int score1, score2;
    float avg;
    char grade;

    printf("Please input your score on test 1: ");
    scanf("%d", &score1);
    printf("Please input your score on test 2: ");
    scanf("%d", &score2);

    avg = (score1 + score2) / 2.0;

    if (avg >= 90){
        grade = 'A';
    }
    else if(avg >= 80 && avg < 90){
        grade = 'B';
    }
    else if(avg >=70 && avg < 80){
        grade = 'C';
    }
    else if(avg >= 60 && avg < 70){
        grade = 'D';
    }
    else grade = 'F';

    printf("Average score: %.2f\n", avg);
    printf("Grade: %c", grade);

    return 0;
}