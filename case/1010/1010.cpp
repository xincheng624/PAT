#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> p;
	char c = ' ';
	while(c != '\n')
	{
		int tmp;
		cin>>tmp;
		p.push_back(tmp);
		c = cin.get();
	}
	for(int i=0;i<p.size();i+=2)
	{
		p[i] *= p[i+1];
		if(p[i+1] == 0)
		{
			if(p[0] == 0)
				break;
			else
			{
				p.pop_back();
				p.pop_back();
				break;
			}
		}
		p[i+1] -= 1;
	}
	for(int i=0;i<p.size();++i)
	{
		cout<<p[i];
		if(i != p.size()-1)
			cout<<" ";
	}
	return 0;
}