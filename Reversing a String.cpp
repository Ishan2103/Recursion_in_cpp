#include <iostream>
using namespace std;

int getLength(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void printReverse(char *str, int index, int n) {
    if (index == n)
        return;
    printReverse(str, index + 1, n);
    cout << str[index];
}

int main() {
    char input[50];
    cout << "Enter a string to reverse: ";
    cin >> input;

    int len = getLength(input);
    cout << "Reversed string: ";
    printReverse(input, 0, len);
    cout << endl;

    return 0;
}
