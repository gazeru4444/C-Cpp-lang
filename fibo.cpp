/*
 * Fibonacci number
 * 3bda2204    城森大地
 */
#include <iostream>
using namespace std;

int fibonacci(int n)
{
    switch (n) {
        case 0: return 0;
        case 1: return 1;
        default: return fibonacci(n - 2) + fibonacci(n - 1);
    }
}

int main()
{
    int n;
    cout << "n? " << flush;
    cin >> n;

    cout << "F(" << n << ") : " << fibonacci(n) << endl;

    return 0;
}
