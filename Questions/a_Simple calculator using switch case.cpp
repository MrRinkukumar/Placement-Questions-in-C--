// write a programme to implement a simple calculator using switch
#include <iostream>
using namespace std;
int main()
{

    int n1, n2;
    cout << "enter two no to perform a calculation";
    // cin>>n1,n2;
    n1 = 5;
    n2 = 6;
    char op;
    cout << "enter a operator to perform calculation EX. -,+" << endl;
    // cin>>op;
    op = '-';
    switch (op)
    {
    case '-':
        cout << "the answer is = " << n1 - n2;
        break;
    case '+':
        cout << "the answer is = " << n1 + n2;
        break;
    case '*':
        cout << "the answer is = " << n1 * n2;
        break;
    case '/':
        cout << "the answer is = " << n1 / n2;
        break;

    default:
        cout << "enter the value for next calculation";
        break;
    }

    return 0;
}