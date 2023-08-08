#include<iostream>
#include<String>
#include<string>
#include<sstream>
using namespace std;
int main(){
	string text = "have a nyc life ";
	stringstream ss;
	int num = 2;
	ss<<num;
	string subint = ss.str();
	text.append(subint);
	cout<<text;
}
