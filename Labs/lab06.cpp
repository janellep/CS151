/* 
  Assignment: lab06
  Date: Feb27th
  Student name: <Janelle Piedrahita>

  To compile: g++ -o lab06 lab06.cpp
  To execute: ./lab06
 
*/

#include <iostream>

using namespace std;

int main()
{    
    cout << " Task 0 \n";
    // TODO:
    string name;
    cout<<"Enter your first name: ";
    cin>>name; 
    cout<<"Hello, "+name+" !\n";
    cout<<"where "+name+" is the user's first name.";
    // End of Task 0



    cout << "\n Task 1\n";
    // TODO:
    int birthyear;
    cout<<"what is your birth year? ";
    cin>>birthyear;
    cout<<"your age in 2020 : "<<(2020 - birthyear);

    // End of Task 1



    cout << "\n Task 2\n";
    // TODO:
    int number1;
    int number2;
    int number3;
    cout<<"Enter a number ";
    cin>>number1;
    cout<<"Enter a number ";
    cin>>number2;
    cout<<"Enter a number ";
    cin>>number3;
    cout<<(number1+number2+number3/3)<<"\n";

    // End of Task 2


    return 0;
}

