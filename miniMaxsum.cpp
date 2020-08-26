#include<iostream>
#include<vector>
using namespace std;
void miniMaxSum(int* arr) {
    int sum=0,max=0;
    for(int i=0;i<5;i++){
        sum += arr[i];
    }
    cout<<sum;
    int sum1 = sum - arr[0];
    int sum2 = sum - arr[1];
    int sum3 = sum - arr[2];
    int sum4 = sum - arr[3];
    int sum5 = sum -arr[4];
    int min =sum5;
    int arr2[]={sum1,sum2,sum3,sum4,sum5};
//    for(int j=0;j<5;j++){
//    	cout<<arr2[j]<<endl;;
//	}
    for(int j=0;j<5;j++){
        if(max<arr2[j]){
            max = arr2[j];
        }
        if(min>arr2[j]){
            min = arr2[j];
        }
    }
    cout<<max<<" "<<min<<endl;
}

int main(){
	int arr[]= {7,8,77,4,5};
	miniMaxSum(arr);
	return 0;
}
