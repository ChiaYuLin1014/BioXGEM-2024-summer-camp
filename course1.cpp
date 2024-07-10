#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

    char name[30];
    char department;
    int score1, score2;
    float avg;

    printf("Please input your name.... ");
    scanf("%s", &name);
    getchar();
    printf("Please select your department....(a:CS b:Bio c:Math)");
    scanf("%c", &department);
    printf("input your score on test 1.... ");
    scanf("%d", &score1);
    printf("input your score on test 2.... ");
    scanf("%d", &score2);

    avg = (float(score1) + float(score2))/2;

    printf("\n\n+---------------------+----------+------+------+-------+\n");
    printf("|        Name         |Department|Test 1|Test 2|Average|");
    printf("\n\n+---------------------+----------+------+------+-------+\n");
    printf("|%-21s|%10c|%6d|%6d|%7.2f|", name, department, score1, score2, avg);
    printf("\n\n+---------------------+----------+------+------+-------+\n");

    


    return 0; 
}