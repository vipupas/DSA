#include<bits/stdc++.h>
using namespace std;

int main() {
	int count = 0;
	int n;
	cout << "Enter Your Number : ";
	cin >> n;
	do{
		n = n/10;
                count += 1;
	} while(n>0);

	cout << count << endl;
}
