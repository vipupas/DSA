#include<bits/stdc++.h>
using namespace std;

void explainMap(){
	// => MAP -> key , value
	// key -> any datatype , unique and sorted ordered
	// value -> any datatype
	
	map<int,int> mpp; // <key,value>
	map<int,pair<int,int>> mpp;
	map<pair<int,int>,int> mpp;
	
	mpp[1] = 2;	// {1,2}
	mpp.emplace({3,1});	// {1,2},{3,1}
	mpp.insert({2,4});	// {1,2},{2,4},{3,1}


	mpp[{2,3}] = 10;
	
	// map => [{1,2},{2,4},{3,1}]
	for(auto it : mpp){
		cout << it.first << " " << it.second << endl;	// first->key, second->value
	}

	cout << mpp[1];	// 2
	cout << mpp[5];	// 0 or null
	
	auto it = mpp.find(3); // *(it) -> {3,2}, it is pointer to 3 
	cout << *(it).second;	// 1
	
	auto it = mpp.find(5); 	// 5 is not found it -point-> mpp.end()
	
	auto it = mpp.lower_bound(2);	// x >= 2
	auto it = mpp.upper_bound(3);	// x > 2
}
