// Convert this program to C++
// change to C++ io
// change to one line comments
// change defines of constants to const
// change array to vector<>
// inline any short function
//
#include<iostream>
#include<vector>
using namespace std;
const int N = 40;
inline void sum(int &s,vector<int> d){
	for(int i=0;i<d.size();i++){
		s = s+i;
	}
}
int main(){
	vector<int> data;
	int s=0;
	for(int i=0;i<N;i++){
		data.push_back(i);
	}
	sum(s,data);
	cout<<"The result of sum is : "<<s;
	return 0;
}
