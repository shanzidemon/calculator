#include <iostream>
using namespace std;
int main()
{
    float Number_1, Number_2;
    char Operator;
    cout << "****Wellcome to Calculetor****" << endl;
    {
        cout << "Enter First Number :";
        cin >> Number_1;
        cout << "Enter The Operator(+,-,*,/) :";
        cin >> Operator;
        cout << "Enter Second Number :";
        cin >> Number_2;
        if (Operator == '+')
        {
            cout << Number_1 << Operator << Number_2 << "=" << Number_1 + Number_2;
        }

        else if (Operator == '-')
        {
            cout << Number_1 << Operator << Number_2 << "=" << Number_1 - Number_2;
        }
        else if (Operator == '*')
        {
        cout << Number_1 << Operator << Number_2 << "=" << Number_1 * Number_2;
        }
        else if (Operator == '/')
        {
            cout << Number_1 << Operator << Number_2 << "=" << Number_1 / Number_2;
        }
        else
        {
            cout << "\nInvalid Operator";
        }
    }
}
