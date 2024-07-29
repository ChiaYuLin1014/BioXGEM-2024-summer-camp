#include <iostream>

using namespace std;

int main(){

    char name[100], school[100];
    char blank = ' ';

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your graduation school: ");
    scanf("%s", school);

    printf("+----------------------------+\n");
    printf("|%16s %11c|\n", name, blank);
    printf("|%25s %2c|\n", school, blank);
    printf("+----------------------------+");




    return 0;
}