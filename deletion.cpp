#include<iostream>
using namespace std;
int main()
{
	string s1="Usman Sarwar";
	cout<<s1<<endl;
	s1.erase(remove(s1.begin(), s1.end(), 'A'), s1.end());
	cout<<s1;
}

