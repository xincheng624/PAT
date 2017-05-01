#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> s;
	string tmp;
	char c = ' ';
	while(c != '\n')
	{
		cin>>tmp;
		s.push_back(tmp);
		c = cin.get();
	}
	for(int i=s.size()-1;i>=0;--i)
	{
		cout<<s[i];
		if(i!=0)
			cout<<" ";
		else
			cout<<endl;
	}
	return 0;
}