/* Q2 - Write a program to print all Armstrong numbers between 100 to 500.
Explanation : A three digit number is called the Armstrong number if the sum of the cube of its digit is equal to
the number itself.
E.g.- 153 is an Armstrong number because (13)+(53)+(33) = 153.
Sample Input : Already mentioned (100 to 500)
Sample Output :
0
1
153
370
371
 */

#include<iostream>
using namespace std;
int main(){
    for (int i = 100; i <= 500; i++)
    {
/* ----------TAKING A TEMPORARY VARIABLE FOR PERFORMING MODIFICATION ON I---------- */
        int temp = i;
        
/* ----------CALCULATING 1ST 2ND AND 3RD DIGIT ---------- */
        int firstDigit = temp/100;
        temp %= 100;
        int secDigit = temp/10;
        temp %= 10;
        int thirdDigit = temp;

/* ----------CONDITION FOR ARMSTRONG NUMBER---------- */
        if(((firstDigit*firstDigit*firstDigit) + (secDigit*secDigit*secDigit) + (thirdDigit*thirdDigit*thirdDigit)) == i){
            cout << i << endl;
        }
    }
    
}