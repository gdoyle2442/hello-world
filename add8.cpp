// add8.cpp
// name: Gina Doyle
// date: 3/15/17

#include <iostream>
using namespace std;

int main ()
{
    float input1, input2, input3, input4, input5, input6, input7, input8, 
    totalsum;
    
    cout << "Enter 8 numbers: " << endl;
    cin >> input1;
    cin >> input2;
    cin >> input3;
    cin >> input4;
    cin >> input5;
    cin >> input6;
    cin >> input7;
    cin >> input8;
    // gives sum of the 8 numbers that were inputed
    totalsum = input1 + input2 + input3 + input4 + input5 + input6 + input7
            + input8;
    cout << "Sum of 8 numbers is: ";
    cout << totalsum << endl;
return 0;
}
