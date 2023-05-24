// write a programme to implement the switch case

#include <iostream>
using namespace std;
int main()
{
    char button;
    cout << "enter a character" << endl;
    // cin>>button;
    button = 'b';
    // by using for loop
    if (button == 'a')
    {
        cout << "hello this is a ";
    }
    else if (button == 'b')
    {
        cout << "this is b";
    }
    else
    {
        cout << "this is not match";
    }
    // by using switch cases
    switch (button)
    {
    case 'a':
        cout << "the value of button is =" << button << endl;
        break;
    case 'b':
        cout << "the value of button is =" << button << endl;
        break;
    case 'c':
        cout << "the value of button is =" << button << endl;
        break;
    case 'd':
        cout << "the value of button is =" << button << endl;
        break;

    default:
        cout << "im still learning" << button << endl;
        break;
    }

    return 0;
}