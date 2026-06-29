#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2){
	if(p1.second < p2.second) return true;
	if(p1.second > p2.second) return false;
	//they are same 
	if(p1.first > p2.second) return true;
	return false;
}


void explainExtra(){

	sort(a,a+4);	// [start , last)
	sort(v.begin(),v.end());

	sort(a,a+n,greater<int>); 

	// my way sorting -> need to write comparitator
	pair<int,int> a[] = {{1,2},{2,1},{4,1}};
	// sort it acc. to second element in accending
	// if second element is same then ,
	// sort to first element but in descending 
	
	sort(a,a+n,comp);
	

	int num = 7;
	int cnt = __builtin_popcount(num); // cout no. of 1 in bits . this is called set bits

	__builtin_popcount(int x);           // int
	__builtin_popcountl(long x);         // long
	__builtin_popcountll(long long x);   // long long	
 

	string s ="123";  // for all permutaions it must be in sorted form
	sort(s.begin(), s.end());

	do{
		cout << s << endl;
	} while(next_permutation(s.begin(), s.end()));

	int maxi = *max_element(a,a+n);
	int mini = *min_element(a,a+n);
}
