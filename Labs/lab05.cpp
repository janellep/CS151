/* 
  assignment: lab05 
  date: Feb25th
  Student name: <Janelle Piedrahita>

  to compile: g++ -o lab05 lab05.cpp
  to execute: ./lab05 
 
*/

#include <iostream>
using namespace std;

int main()
{ 

   cout << boolalpha;

    // Task 0
    // TODO:
    // declare integer variable x
    int x;
    // declare two double variables s, t
    double s,t;
    // declare integer variable n
    int n;
    // declare integer variable dy
    int dy;
    // declare string variable val
    string val;
    // declare ineger variable yr
    int yr;

    

    //
    // Task 1 Begins
    cout << "Task 1\n";
    cout << "Enter an integer: ";
    cin >> x;
    
    // TODO:
    // Assign solution to task 1 to r1; 
    bool r1 = ((x % 3 == 0)&&(x % 7 == 0));
    
    cout << "It is " << r1 << " that " << x << " is a multiple of both 3 and 7\n\n";
    // Task 1 Ends




    //
    // Task 2 Begins
    cout << "Task 2\n";
    cout << "Enter a number: ";
    cin >> s;
    cout << "Enter another number: ";
    cin >> t;

    // TODO:
    //Assign solution to task 2 to r2; 
    bool r2 = (s<=0);
    
    cout << "It is " << r2 << " that " << s << " and " << t << " have the same sign\n\n";
    // Task 2 Ends




    //
    //  Task 3 Begins
    cout << "Task 3\n";
    cout << "Enter an integer: ";
    cin >> n;

    // TODO:
    // Assign solution to task 3 to r3; 
    bool r3 = false;
    
    cout << "It is " << r3 << " that " << n << " is a three digit number\n\n";
    // Task 3 Ends




    //
    //  Task 4 Begins 
    cout << "Task 4\n";
    cout << "Enter a day: ";
    cin >> dy;

    // TODO:
    // Assign solution to task 4 to r4; 
    bool r4 = (dy == 3 );
    
    cout << "It is " << r4 << " that " << dy << " fell on a Monday in the month of February 2020\n\n";
    // Task 4 Ends

    

    // 
    // Task 5 Begins
    cout << "Task 5\n";
    cout << "Enter a word: ";
    cin >> val;

    // TODO:
    // Assign solution to task 5 to r5; 
    bool r5 = false;
    
    cout << "It is " << r5 << " that " << val << " equals some version of \"no\"\n\n";
    // Task 5 Ends



    //
    // Task 6 Begins
    cout << "Task 6\n";
    cout << "Enter a year: ";
    cin >> yr;

    // TODO: 
    // Assign solution to task 6 to r6; 
    bool r6 = false;
    
    cout << "It is " << r6 << " that " << yr << " is a leap year\n\n";
    // Task 6 Ends


    
    return 0;
}
