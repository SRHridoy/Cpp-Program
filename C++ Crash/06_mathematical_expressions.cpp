#include<iostream>

int main() {
    int x = 10;
    int y = x++; // x = 11, y = 10
    int z = ++x; // x = 11, z = 11

    std::cout << x;
    return 0;
}