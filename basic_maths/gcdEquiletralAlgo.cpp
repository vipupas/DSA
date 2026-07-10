#include<iostream>
using namespace std;

// Equiletral Algorithm state that  gcd(a,b) = gcd(a-b,b) where a>b.
//
// gcd(a,b) = gcd(a%b,b) where a > b.
//
// when of the become zero then other will be he gcd of both number .
int main(){
	int a ,b ;
	cin >> a;
	cin >> b;

	while( a>0 && b>0){
		if (a > b) a = a%b;
		else b = b%a;
	}
	if (a==0) cout<< b;
	else cout<< a;
}

// time complex - O(log eq min(a,b))

