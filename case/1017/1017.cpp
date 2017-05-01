#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string A;
	int B;
	cin >> A >> B;
	vector<int> Q;
	string c;
	int q = 0;
	int r = 0;
	for(int i=0;i<A.size();++i)
	{
		if(r == 0)
		{
			int a = A[i]-'0';
			if (a >= B)
			{
				q = a/B;
				Q.push_back(q);
				r = a%B;
			}
			else
			{
				q = 0;
				if(i != 0 || A.size() == 1)
					Q.push_back(q);
				r = a;
			}
		}
		else
		{
			int a = r*10 + A[i] -'0';
			q = a/B;
			Q.push_back(q);
			r = a%B;
		}
	}
	vector<int>::iterator it;
	for(it= Q.begin();it!=Q.end();++it)
	{
		cout<<*it;
	}
	cout<<" "<<r;
	return 0;
}