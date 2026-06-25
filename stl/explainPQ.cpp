#include<bits/stdc++.h>
using namespace std;

void explainPQ(){

	 // special type of queue in which elements are according to priority rather than the order in which they were inserted.
	 
	 // maximum heap
	 priority_queue<int> pq;
	 pq.push(5);	// {5}
	 pq.push(2);	// {5,2}
	 pq.push(8);	// {8,5,2}
	 pq.emplace(10);	// {10,8,5,2}
	 
	 cout <<  pq.top();	// 10
	 
	 pq.pop();	// {8,5,2}
	 

	 // size ,swap ,empty function is same as other


	 // minimum heap
	 priority_queue<int,vector<int>, greater<int>> pq;
	 pq.push(5);	// {5}
	 pq.push(2);	// {2,5}
	 pq.push(8);	// {2,5,8}
	 pq.emplace(10)	// {2,5,8,10}
	 
	 cout << pq.top(); // 2
	

// time complexity 
// push and pop - log(n)
// top - O(1)	 
}
