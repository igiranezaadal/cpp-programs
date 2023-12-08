#include <iostream>

using namespace std;

int main() {
    double num1, num2, num3;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;
    double smallest = num1;

    if (num2 < smallest) {
        smallest = num2;
    }

    if (num3 < smallest) {
        smallest = num3;
    }
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}

