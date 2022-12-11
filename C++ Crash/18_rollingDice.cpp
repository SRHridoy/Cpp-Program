#include<iostream>
using namespace std;

int main(){
    const short minValue = 1;
    const short maxValue = 6;

    srand(time(0));
    short first =  (rand() % (maxValue -minValue +1)) + minValue;
    short second = (rand() % (maxValue -minValue +1)) + minValue;

    cout << first << "," << second;
}