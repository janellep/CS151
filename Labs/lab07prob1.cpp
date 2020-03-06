/* 
  Assignment: lab07 Problem-1
  Date: March3rd
  Student name: <Janelle Piedrahita>

  To compile: g++ -o lab07prob1 lab07prob1.cpp
  To execute: ./lab07prob1
 

   TODO:
   Write the Pseudocode for problem1  
    1) total company sale is 8,600,000
        a) ecPercent is  0.58
        b)  ecsales = 0
2)ecsales = totalsales * ecpercent
3)display the amount calculATED AMOUNT OF SALES BY EAST COAST DIVISION





*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{    
    // TODO:
    // implement your Pseudocode in C++ 
    int totalsales = 8600000;
    double ecpercent = 0.58;
    double ecsales = 0.0;
    ecsales = totalsales * ecpercent;
    cout<<setprecision(2);
    cout<<"East Coast Division generated "<< fixed << ecsales <<"\n";




    return 0;
}

