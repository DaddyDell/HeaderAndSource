//function.cpp
#include "function.h"

using namespace::std;

void bank(int money)
{//A copy of the var is passed.
    money = 500;
}
void bankByRef(int& money)
{//A Reference to the var is passed.
    money = 500;
}
void bankByPo(int* money)
{//A Pointer to the var is passed.
    *money = 900;
}
