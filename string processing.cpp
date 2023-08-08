#include<iostream>
#include<string>
#include<String>
#include<sstream>
using namespace std;
int main()
{	
	string str="Umer is good boy";
	string sub = str.substr(8,4);
	cout<<sub<<endl;
	string st2= " really!";
	str.append(st2);
	cout<<str<<endl;
	
	int loc = str.find("good");
	cout<<loc<<endl;	
	string sub1 = str.substr(8,8);
	cout<<sub1;
	cout<<endl;
	string pak= "pakistan zindabad";
	stringstream ss;
	int abc= 50;
	ss<<abc;
	string subint = ss.str();
	cout<<subint;
    cout<<endl;	
	cout<<pak.append(subint);	
	return 0;
	
}

