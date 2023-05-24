// write a programme to check the given number is prime number is or not;
// prime no:- the prime number is have only two dividend
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n = 18;
    bool flag = 0;
    if (n == 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if ((n % i) == 0)
        {
            cout << "the number  is non -prime";
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "the number is prime";
    }

    return 0;
}