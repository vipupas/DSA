#include<bits/stdc++.h>
using namespace std;

void explainStack(){
	// LIFO -> Last in First Out
	
	stack<int> st;
	st.push(1);	// {1}
	st.push(2);	// {2,1}
	st.push(3);	// {3,2,1}
	st.push(3);	// {3,3,2,1}
	st.emplace(5);	// {5,3,3,2,1}  5 is first here but goes in last 
	
	cout << st.top(); // 5
	st.pop(); 

	cout << st.size();	// 4
	cout << st.empty();	// false
	
	stack<int> st1,st2;
	st1.swap(st2);

	//complexity of push and pop is O(1)
}
