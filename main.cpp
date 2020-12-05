#include <iostream>

using namespace std;


int main()
{
    int num1, num2, op;
    double result;
    cout << "C++ Basic Calculator" << endl;
    cout << "--------------------" << endl;
    cout << "Enter 1st number: " << endl;
    cin >> num1;
    cout << "Enter 2nd number: " << endl;
    cin >> num2;
    cout << "Choose Operator: " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cin >> op;

    switch (op){
    case 1:
        result = num1 + num2;
        cout << "--------------------" << endl;
        cout << result;
        break;
    case 2:
        result = num1 - num2;
        cout << "--------------------" << endl;
        cout << result;
        break;
    case 3:
        result = num1*num2;
        cout << "--------------------" << endl;
        cout << result;
        break;
    case 4:
        if (num2 == 0){
            cout << "--------------------" << endl;
            cout << "Indeterminate";
            break;
        }
        else{
            result = num1/(float)num2;
            cout << "--------------------" << endl;
            cout << result;
            break;
        }
    default:
        cout << "--------------------" << endl;
        cout << "Invalid Entry";

    }
    return 0;
}











