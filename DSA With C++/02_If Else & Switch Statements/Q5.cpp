/* Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication
and division. (Hard)

Sample Input :
Enter an operator (+, -, *, /): -
Enter two numbers:
6
8
Sample Output : 6 - 8 = -2 */

#include<iostream>
using namespace std;
int main(){
    char op;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    
    int num1, num2;
    cout << "Enter two numbers:" << endl;
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << num1 << " " <<  op  << " " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " " <<  op  << " " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " " <<  op  << " " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 << " " <<  op  << " " << num2 << " = " << num1 / num2 << endl;
        break;
    default:
        cout << "Invalid Operation" << endl;
        break;
    }
}