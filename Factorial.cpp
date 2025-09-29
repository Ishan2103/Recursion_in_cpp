#include <iostream>
using namespace std;

int factorial(int num) {
    if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}

int main() {
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    int result = factorial(number);
    cout << "Factorial of " << number << " is: " << result << endl;

    return 0;
}
