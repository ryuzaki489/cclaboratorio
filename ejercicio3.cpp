#include <iostream>
#include <stdlib.h>

void printNum(int); //por lo menos el nombre con sus tipo de parametros deben ir antes de main

int main(){

    printNum(35);

    return 0;
}

void printNum(int number) {
    std:: cout << number << "\n";
}