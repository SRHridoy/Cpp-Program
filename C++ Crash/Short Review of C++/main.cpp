#include <iostream>
#include<string>
using namespace std;

//f(x) = x^2 +2;
// int sum(int a, int b){
//     int c;
//     c = a + b;
//     return c;
// }

    class Employee{
        public:
            string name;
            int salary;

            Employee(string n, int s, int sp){
                this->name = n;
                this->salary = s;
                this->secretPassword = sp;
            }
            
            void printDetails(){
                cout<<"The name of our first employee is "<<this->name<<" and his salary is "<<this->salary<<"$"<<endl;
            }

            void getSecretPassword(){
                cout<<"The secret password of employee is "<< this->secretPassword;
            }
            private:
                int secretPassword;
    }; 

    class Programmer : public Employee{
        public:
            int errors;
    };

int main()
{
        // cout << "Hello World!" << endl;
    // cout << "Next line";

    // Single line comment;

    // /*Multiline comment
    // ....
    // */

                       // DATATYPES....
    // int a, b, c;
    // short sa = 9;
    // cout << sa;

                 // CamelCase Notation...
    // int marksInMaths = 83;
    // cout << "The marks of the student in maths is " << marksInMaths;

    // short a;
    // int const b = 5;
    // long c;
    // long long d;
    // float const score = 45.32;
    // double score2 = 34.444;
    // long double score3 = 33.4;
    // // score = 344;
    // cout << "The score is " << score;

                       // USER INPUT...

    // int a,
    // int  b;
    // cout << "Enter first number" << endl;
    // cin >> a;

    // cout << "Enter second number" << endl;
    // cin >> b;

    // cout << "a + b is " << a + b << endl;
    // cout << "a - b is " << a - b << endl;
    // cout << "a * b is " << a * b << endl;
    // cout << "a / b is " << (float)a / b << endl; // TypeCast...

                   // If - Else statments...

    // int age;
    // cout << "Enter your age" << endl;
    // cin >> age;
//     if (age > 150 || age < 1)
//     {
//         cout << "Invalid age";
//     }
//     else if(age >= 18)
//     {
//         cout << "You can vote";
//     }
//     else
//     {
//         cout << "You cannot vote";
//     }

                //Switch Statement...

//     int age;
//     cout << "Enter your age" << endl;
//     cin >> age;
//     switch (age)
//     {
//     case 12:
//         cout << "You are 12 years old";
//         break;
//     case 18:
//         cout << "You are 18 years old";
//         break;

//     default:
//         cout << "You are neither 12 nor 18 years old";
//         break;
//     }

                            //LOOPS...
    // int index = 0;
                    //WHILE LOOP...
    // while (index < 34)
    // {
    //     cout<<"We are at in index number" <<index<<endl;
    //     index++; 
    // }

                //DO WHILLE LOOP...
    // do
    // {
    //     cout<<"We are at index number"<<index<<endl; 
    //     index++;   
    // } while (index >3453);

                //FOR LOOP...
    // for (int i = 0; i < 34; i++)
    // {
    //     cout<<"The value of i is"<<i<<endl;
    // }
    

                                //FUNCTIONS...

    // int a, b;
    // cout << "Enter first number" << endl;
    // cin >> a;

    // cout << "Enter second number" << endl;
    // cin >> b;
    // cout<<"The function returned " << sum(a, b);


                                   //ARRAY...


    // int arr[] = {1, 3, 6};
    // //Array index 0  1  2
    // // cout<<arr[2];
    // int marks[6];
    // for(int i = 0; i < 6; i++){
    //     cout<<"Enter the marks of "<< i <<"th student "<<endl;
    //     cin>>marks[i];
    // }
    // for(int i = 0; i < 6; i++){
    //     cout<<"Marks of "<<i<<"th student is "<<marks[i]<<endl;
    // }

    // int arr2d[2][3] = {//[row][coloumn]
    //     {1,2,3},
    //     {4,5,6}
    // };
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"The value at "<<i<<","<<j<< " is "<<arr2d[i][j]<<endl;
    //     }
        
    // }
                            //TYPECAST...
//     int a = 343;
//     float b = 87.94;
//     cout<<(float) a/34 <<endl;
//     cout<<(int) b;

                            //STRING DATATYPE...
    
//     string name = "Elite";
//     cout<<"The name is "<< name<<endl;
//     cout<<"The length of name is "<< name.length()<<endl;
//     cout<<"The name is "<< name.substr(0,3)<<endl;
//     cout<<"The name is "<< name.substr(2,3);


                            //POINTERS...
    // int a = 34;
    // int *ptr;
    // ptr = &a;
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of a is "<<*ptr<<endl;
    // cout<<"The adress of a is "<<&a<<endl;
    // cout<<"The adress of a is "<<ptr<<endl;

                        //OBJECTS & CLASSES...
    
    Employee eli("Elite constructor",344,2102002);
    // eli.name = "EliteCoder";
    // eli.salary = 100;
    // cout<<"The name of our first employee is "<<eli.name<<" and his salary is "<<eli.salary<<"$"<<endl;
    eli.printDetails();
    // cout<<eli.secretPassword;
    eli.getSecretPassword();

    return 0;
}

