#include<bits/stdc++.h>
using namespace std;

void explainPair(){
	pair<int,int> p = {1,3};
	cout << p.first << " " << p.second;

	// nested pair -> to store more than 2 data
	pair<int, pair<int, int>> p = {1,{3,4}};
	cout << p.first << " " << p.second.second << " " << p.second.first;

	// pair in array
	pair<int,int> arr[] = {{1,2},{3,4},{5,6},{7,8}};
	cout << arr[1].second;
}
