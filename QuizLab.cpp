#include<iostream>
#include<string>
#include<String>
#include<sstream>
using namespace std;
int main(){
	string text1 = "DMLN is a Good Party";
	string text2 = "I like PTI due to Imran Khan";
	string text3 = "PTI did not burden us like this";
	string text4 = "PML Govt is always nice";
	string text5 = "Nawaz Sharif spread hate speech regarding army";
	
	string p_text = " = Positive Review";
	string n_text = " = Negative Review";
	
	cout<<text1.append(p_text)<<endl;
	cout<<text2.append(p_text)<<endl;
	cout<<text3.append(n_text)<<endl;
	cout<<text4.append(p_text)<<endl;
	cout<<text5.append(n_text)<<endl;

	return 0;  
}
