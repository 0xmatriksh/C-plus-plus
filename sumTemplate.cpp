#include<iostream>
#include<vector>
using namespace std;
template<class t>
void sum(vector<t> arr){
    t sum =0;
    for(t i=0;i<arr.size();i++)
    {
        sum += arr[i];
    }
    cout<<"The total sum of array is : "<<sum<<endl;
}

int main(){
    vector<int> arr;
    int size;
    cout<<"Enter number of elements : "<<endl;
    cin>>size;
    for (int i = 0; i < size; ++i)
    {
        int input;
        cout<<"Enter  a number : ";
        cin>>input;
        arr.push_back(input);
    }
    sum(arr);
    
}
