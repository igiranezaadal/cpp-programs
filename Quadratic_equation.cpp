#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    float *pa=&a, *pb=&b, *pc=&c, *px1=&x1, *px2=&x2, *pdiscriminant=&discriminant, *prealPart=&realPart, *pimaginaryPart=&imaginaryPart;
    cout << "Enter coefficients a";
    cin >> a ;
    cout << "Enter coefficients b: ";
    cin >> b;
    cout << "Enter coefficients c: ";
    cin >> c;
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << *px1 << endl;
        cout << "x2 = " << *px2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << *px1 << endl;
    }
    elseP{
	cout<<"there is no real root";
	}

//    else {
//        realPart = -b/(2*a);
//        imaginaryPart =sqrt(-discriminant)/(2*a);
//        cout << "Roots are complex and different."  << endl;
//        cout << "x1 = " << *prealPart << "+" << *pimaginaryPart << "i" << endl;
//        cout << "x2 = " << *prealPart << "-" << *pimaginaryPart << "i" << endl;
//    }

    return 0;
}
