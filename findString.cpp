#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void findWords(int m,int n,int s,vector<vector <char> > a, vector <string> b){
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<s;k++){
				int f = 0;
				for(int l=0;l<b[k].size();l++)
				{
					
					if(a[i][l] == (b[k])[l])
					{
						f = 1;
					}
					else{
						f = 0;
					}
				}
				if(f==1){
					cout<<b[k];
					break;
				}
			}
		}
		cout<<"\n";
	}

//	for(int i=0;i<s;i++){
//		for(int j=0;j<b[i].size();j++)
//		{
//			cout<<(b[i])[j]<<endl;
//		}
//	}
}

int main()
{
	//2d array of random alphaber
	int m,n;
	cin>>m>>n;
	vector <vector <char> > a;
	a.resize(m,vector<char>(n));
	cout<<"Enter the array :"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	//array of strings
	int s;
	cin>>s;
	vector<string> b;
	
	for(int i=0;i<s;i++){
		cout<<"ENter string : ";
		string input;
		cin>>input;
		b.push_back(input);
	}
	
	findWords(m,n,s,a,b);
	return 0;	
}
