#include <iostream>
#include <string>
#include "function.h"

using namespace::std;

int main()
{

    int balance = 200;
    string savings = "A whole lot";
    
    bank(balance);//A copy is passed
    cout << "A Copy is passed...\n";
    cout << "The main balance is: " << balance << endl;
    cout << "The amount in the savings is: " << savings << endl;
    
    bankByRef(balance);//A Reference is passed
    cout << "A Reference is passed...\n";
    cout << "the main balance is: " << balance << endl;
    cout << "The amount in the savings is: " << savings << endl;
    
    bankByPo(&balance); //A Pointer is passed.
    cout << "A Pointer is passed...\n";
    cout << "The main balance is: " << balance << endl;
    cout << "The amount in the savings is: " << savings << endl;

    return 0;
}
