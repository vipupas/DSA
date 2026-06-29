#include<bits/stdc++.h>
using namespace std;

void explainMultiSet(){
	// everthing same as set 
	// only stores duplicate elements also
	
	multiset<int> ms;
	ms.insert(1);	// {1}
	ms.insert(1);	// {1,1}
	ms.insert(1);	// {1,1,1}
	
	ms.erase(1);	// erease all 1's
	
	int cnt = ms.count(1);	 // count no. of 1's

	// to earase single 1 
	ms.erase(ms.find(1));

	ms.erase(ms.find(1),ms.find(1)+2);

	// rest all the function same as set
}
