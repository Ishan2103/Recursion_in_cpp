#include <iostream>
using namespace std;

int calculateSum(int n) {
    if (n <= 1)
        return n;
    else
        return n + calculateSum(n - 1);
}

int main() {
    int number;
    cout << "Please enter a positive number: ";
    cin >> number;

    int total = calculateSum(number);
    cout << "The sum of first " << number << " numbers is: " << total << endl;

    return 0;
}
