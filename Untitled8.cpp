#include <iostream>
using namespace std;
int main() {
	int a,b,c;
	cout <<"enter the vlue of a"<< endl;
	cin>>a;
	cout <<"enter the vlue of b"<< endl;
	cin>>b;
	cout <<"enter the vlue of c"<< endl;
	cin>>c;
	if(a<b && a<c)
	cout<<"smallest number is "<<a<<endl;
	
	else if(b<a && b<c)
	cout<<"smallest number is "<<b<<endl;
	
	else if(c<a&&c<b)
	cout<<"smallest number is "<<c<<endl;
	
	else if(c==a&&c==b)
	cout<<"all numbers are equal";
	
	else cout<<" invalid input"<<endl;
    return 0;
}
