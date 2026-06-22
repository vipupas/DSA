#include<bits/stdc++>
using namespace std;

void explainVector(){
	//vector - container which is dynamic in size
	
	//declearing vector
	vector<int> v;	//empty dynamic array

	v.push_back(1);		// {1}
	v.emplace_back(2)	// {1,2}
	// emplace_back is faster then push_back
	
	vector<pair<int , int>> vec;
	vec.push_back({1,2});
	vec.emplace_back(1,2);

	vector<int> v(5,100);	//{100,100,100,100,100}
	vector<int> v(5);	// size of 5 vector is created
	
	vector<int> v1(5,20);
	vector<int> v2(v1);	// v1 will copy in v2
	
	cout << v[0] << " " << v.at(0); // acessing elements
	
	vector<int>::iterator it = v.begin();

	it++;
	cout<<*(it) << " ";

	vector<int>::iterator it = v.end();	// point to after end element
	vector<int>::iterator it = v.rend();	// it will reverse the array and point after end element
	vector<int>::iterator it = v.rbegin();	

	vector << v.back() << " ";	// end element
	
	for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
		cout << *(it) << " ';
	}

	for(auto it = v.begin(); it != v.end(); it++){
		cout<< *(it) <<" ";
	}

	for(auto it : v){
		cout<< it << " ";
	}
	
	//{10,20,30,50}
	v.erase(v.begin()+1);
	// {10,20,30,40,50,60}
	v.erase(v.begin()+1,v.begin()+4); // {20,50,60}  [start,end-1]
	
	// insert function
	vector<int> v(2,100);	// {100, 100}
	v.insert(v.begin(),300);	// {300, 100, 100}
	v.insert(v.begin()+1,2,10);	// {300, 10, 10, 100, 100}
	

	vector<int> copy(2, 50);	// {50,50}
	v.insert(v.begin(), copy.begin(), copy.end());	//{50,50,300,10,10,100,100}
	// {10,20}
	cout << v.size();	// 6
	v.pop_back(); // {10}
	

	// v1 -> {10,20}
	// v2 -> {30,40}
	v1.swap(v2);

	v.clear(); // erase the entire vector
	cout<< v.empty();
}	

