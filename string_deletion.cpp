#include<iostream>
using namespace std;
int main()
{
//	string text = "have a nyc life";
//	text.erase(5,1);
    string text = "This is an example of C and C++";
    text.erase(text.begin()+4,text.end());
    cout<<text;
	return 0;
	
}


