#include<iostream>
using namespace std;
int main(){
	string sub;
	int pos;
//	string r;
	string s1 = "Pakistan is a developing country";
    pos = s1.find("ing cou");
    sub = s1.substr(pos + 1);
	cout<<"String is : "<<sub;
	return 0;
}
