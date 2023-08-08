#include<iostream>
#include<String>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	string text = "aaabb";
	string text2 = "bb";
	int found = text.find(text2);
	while(found != string::npos)
	{
		cout<<"Pattern found at index "<<found;
		found=text.find(text2,found+1);		
	}
	return 0;
}

