#include <iostream>
using namespace std;

int findDuplicate(int *a)
{
	int slow = a[0];
	int fast = a[0];
	do {
		slow = a[slow];
		fast = a[a[fast]];
	}while(slow != fast);
	
	fast = a[0];
	while(slow != fast){
		slow = a[slow];
		fast = a[fast];
	}
	return slow;
}

int main()
{
	int a[7]={1,3,4,5,2,6,1};
	int duplicate = findDuplicate(a);
	cout<<duplicate;
	return 0;
}
