/* 
  Assignment: lab07 Problem-2
  Date: March3rd
  Student name: <your name>

  To compile: g++ -o lab07prob2 lab07prob2.cpp
  To execute: ./lab07prob2
 

   TODO:
   Write the Pseudocode for problem2
    1) double pershare = 35.00
    2) sharebought = 750
    3)



*/

#include <iostream>

using namespace std;

int main()
{    
int unitStocks;
    double stockPrice,stockCost, comPerc, com,total;
    cout<< "Enter the units of shares bought?"<<endl;
    cin>>unitStocks;
    cout <<"Enter the price of the stocks?"<<endl;
    cin>>stockPrice;
    cout<< "Enter commission percent?"<<endl;
    cin>>comPerc;
    stockCost=unitStocks*stockPrice;
    com=stockCost*comPerc/100;
    total=stockCost+com;
    cout<<"The cost of the stock is $"<<setprecision(2)<<fixed <<stockCost<<", the commission at "<<comPerc<<"% is $"<<setprecision(2)<<fixed <<com<<", your total is $"<<setprecision(2)<<fixed <<total<<"."<<endl;

    return 0;
}

