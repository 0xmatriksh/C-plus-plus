//Dutch National Flag Algorithm
#include<iostream>
#include<vector>
using namespace std;
class Solution{
	public:
		void sortColors(vector<int> nums)
		{
			int l = 0;
			int m = 0;
			int h = nums.size()-1;
			while(m<=h){
				switch(nums[m]){
					case 0:
						swap(nums[l++],nums[m++]);
						break;
					case 1:
						m++;
						break;
					case 2:
						swap(nums[m],nums[h--]);
						break;
				}
			}
			cout<<"Number after arranging...."<<endl;
			for(int i=0;i<nums.size();i++){
				cout<<nums[i]<<" ";
			}	
		}
	};

int main(){
	int n;
	vector<int> arr;
	cout<<"Enter the number of element you want to enter : "<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter number: ";
		int input;
		cin>>input;
		arr.push_back(input);
	}
	Solution s1;
	s1.sortColors(arr);
	return 0;
}
