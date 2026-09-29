#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    num1;
    if (num1 < num2&&num1<num3) {
    	cout<<"the smallest number is "<<num1<<endl;
    }
    else if (num2 < num1&&num2<num3) {
    	cout<<"the smallest number is "<<num2<<endl;
    }
	else if (num3 < num1&&num3<num2) {
    	cout<<"the smallest number is "<<num3<<endl;
    }
    else if (num1==num2 && num1==num3) {
    	cout<<"all number are equal"<<endl;
    }
	else cout<<"invald input";
    return 0;
}

