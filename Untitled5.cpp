#include <iostream>
using namespace std;
int main() {
    int s;
    for(int i=1,k=0 ; i<=5 ; ++i, k = 0) {
        for(s = 1; s<= 5-i; s++) {
            cout <<"  ";
        }
        while(k != 2*i-1) {
            cout << "* ";
            k++;
        }
        cout << endl;
    }
    return 0;
}
