#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a value of a:";
    cin >> a;
    int b;
    cout << "Enter a value of  b:";
    cin >> b;

    char op;
    cout << "Enter the operation:";
    cin>>op;

    switch (op)
    {
    case '+':
        cout << "a+b:" << a + b;
        break;
    case '-':
        cout << "a-b:" << a - b;
        break;
    case '*':
        cout << "a*b:" << a * b;
        break;
    case '/':
        cout << "a/b:" << a / b;
        break;

    default:
        cout << "Enter a correct opetor!!!";
        break;
    }
    return 0;
}