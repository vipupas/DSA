#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cout<<"Enter Your Number: ";
	cin>>n;
	int ln;
	int revNum = 0;
	do{
		ln = n%10;
		n = n/10;

		revNum = (revNum*10)+ln;
	}while(n>0);

	cout << revNum << endl;
}
