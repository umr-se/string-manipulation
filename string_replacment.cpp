#include<iostream>
using namespace std;
int main()
{
	string text = "never ever have a ----------";
	text.replace(10,5," ever");
	cout<<text;
	return 0;
}

