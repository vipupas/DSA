#include<bits/stdc++.h>
using namespace std;

void explainList(){
	// List -> is dynamic in nature
	
	// initialization
	list<int> ls;

	ls.push_back(2);	// {2}
	ls.emplace_back(4);	// {2,4}
	
	ls.push_front(5);	// {5,2,4} time complexity is cheap then insert in vector 

	ls.emplace_front()	// {2,4}
	

	// rest functions are same as vector 
	// begin , end , rbegin , rend , clear , insert , size , swap
}
