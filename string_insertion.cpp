#include<iostream>
using namespace std;
int main()
{
	string text = "Have a life";
	string text2 = "nyc ";
	cout<<"Strong contains : "<<text<<endl;
	cout<<"After Insertion : "<<text.insert(7,text2,0,4);
	return 0;
}
