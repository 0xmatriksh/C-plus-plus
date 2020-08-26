#include <iostream>
using namespace std;
enum days{SUN,MON,TUE,WED,THU,FRI,SAT
};

ostream& operator<<(ostream& out,const days& d){
	switch(d){
		case SUN: out<<"SUN";break;
		case MON: out<<"MON";break;
		case TUE: out<<"TUE";break;
		case WED: out<<"WED";break;
		case THU: out<<"THU";break;
		case FRI: out<<"FRI";break;
		default: out<<"SAT";break;
	}
	return out;
}

days operator++(days& d){
	return static_cast<days>((static_cast<int>(d)+1)%7);
}
days operator++(days& d,int){
	days temp = d;
	d = static_cast<days>((static_cast<int>(d)+1)%7);
	return temp;
}

int main(){
	days d = MON,e;
	e = d++;
	cout<<d<<"\t"<<e;
	return 0;
}
