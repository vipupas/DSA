#include<bits/stdc++.h>
using namespace std;

void explainSet(){
	set<int> st;
	st.insert(1);	// {1}
	st.emplace(2);	// {1,2}
	st.insert(2);	// {1,2}
	st.insert(4);	// {1,2,4}
	st.insert(3);	// {1,2,3,4}
	
	// begin(), end(), rbegin(), rend(), size(), empty() and swap()
	// are same as vector 
	
	// {1,2,3,4,5}
	// auto -> automatically determine the variable data type
	auto it = st.find(3); // this is an iteration points to the 3
	
       	auto it = st.find(6); // return st.end() because 6 is not found
	
	st.erase(5);	// earase 5 // take logrithmic time

	int cnt = st.count(1);	// can be use to check presence of element return -> 0 or 1
	
	auto it = st.find(3);
	st.erase(it); // -> Function Overloading - having multiple functions with the same name but different parameter
	
	// {1,2,3,4,5}	
	auto it1 = st.find(2);
	auto it2 = st.find(4);

	st.erase(it1,it2);	// {1,4,5}  . here [first,last)
	
	auto it = st.lower_bound(2);	// iteration must be >= 2 
	auto it = st.lower_bound(3);	// iteration must be > 3
}
