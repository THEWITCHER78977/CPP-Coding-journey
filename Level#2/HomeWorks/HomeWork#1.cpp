#include <iostream>

using namespace std;

int ReadNumber()
{
    int Numebr = 0;
    
    cout << "Plese enter a Number : ";
    cin >> Numebr;

    return Numebr;
}

void CheckIfNumberIsPositiveOrPositive()
{
    int Number = ReadNumber();
    string Result;
    
    Result= (Number >= 0) ?  "Positive" : "Nigative";

    cout << "the Number You Enterd is " << Result << endl;
}

void CheckIfZeroOrPositiveOrNigative()
{
    int Number = ReadNumber();
    string Results;

    Results = (Number == 0) ? "Zero" : (Number > 0) ? "Psotive" : "Nigative";

    cout << "the Number You Enterd is " << Results << endl;

}

int main()
{
    CheckIfZeroOrPositiveOrNigative();
    return 0;
}