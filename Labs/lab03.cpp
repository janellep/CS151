/*
  Date: Feb 13
  Assignment: In-class Lab03
  Name: <Janelle  Piedrahita>

  To compile: g++ -o lab03 lab03.cpp
  To execute: ./lab03

*/

#include <iostream>
using namespace std;

int main()
{    
    cout << "Task 0: \n";
    // Todo
    cout<<"\n";
    string a;
    string b;
    a = "Hello";
    b = "World";
    cout<<a<<", "<<a<< " "<<b<<"!";
    cout<<"\n";

    cout << "\nTask 1:\n";

    // Todo
    cout<<"\n";
    int height;
    int inches;
    int feet;
    height = 87;
    inches = height % 12;
    feet = height / 12;
    cout<<"The height of "<<height<<" inches is equal to "<<feet<<" feet and "<<inches<<" inches.";
    cout<<"\n";

    cout << "\nTask 2: \n";
    // Todo 
    cout<<"\n";
    string star1;
    string star2;
    string star3;
    string star4;
    star1 ="*";
    star2 ="**";
    star3 ="***";
    star4 ="****";
    cout<<star4<<" "<<star1<<" "<<star1<<" "<<star4<<"\n";
    cout<<star3<<" "<<star2<<" "<<star2<<" "<<star3<<"\n";
    cout<<star2<<" "<<star3<<" "<<star3<<" "<<star2<<"\n";
    cout<<star1<<" "<<star4<<" "<<star4<<" "<<star1<<"\n";
    cout<<"\n";
    return 0;
}
