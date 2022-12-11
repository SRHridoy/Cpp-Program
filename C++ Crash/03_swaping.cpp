#include<iostream>

int main() {
    int num1 = 5;
    int num2 = 1;
    int swap;

    swap = num1;
    num1 = num2;
    num2 = swap;
    
    std::cout << num1;
    std::cout << num2;
    
    return 0;
}