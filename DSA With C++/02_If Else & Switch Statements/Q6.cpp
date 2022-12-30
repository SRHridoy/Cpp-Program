/* Q6. Write a program to calculate marks to grades . Follow the conversion rule as given below :

Sample Input : Enter Your Marks: 98
Sample Output : Your Grade is A+

(Medium) */
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter Your Marks: ";
    cin >> marks;
    
    if(marks>=90 and marks <=100)
        cout << "Your Grade is A+" << endl;
    else if(marks>=80 and marks <=90)
        cout << "Yout Grade is A" << endl;
    else if(marks>=70 and marks <=80)
        cout << "Yout Grade is B+" << endl;
    else if(marks>=60 and marks <=70)
        cout << "Yout Grade is B" << endl;
    else if(marks>=50 and marks <=60)
        cout << "Yout Grade is C" << endl;
    else if(marks>=40 and marks <=50)
        cout << "Yout Grade is D" << endl;
    else if(marks>=30 and marks <=40)
        cout << "Yout Grade is E" << endl;
    else
        cout << "Yout Grade is F" << endl;
}