#include <iostream>
using namespace std;

int main(){
	string name = "07:05:45PM";
	int n = ((int)name[0]-48)*10+((int)name[1]-48);
	if(n>12){
		
	}
	char a = name[8];
//	cout<<a;
	if(a=='P'){
		n += 12;
	}
	cout<<"THe name start from : "<<n;
//	char name = stringn)
//	cout<<name;
	string nname = char(n);
	return 0;
}
