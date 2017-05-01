#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

void test_loop(set<int> & st,int n)
{
	while(n != 1)
	{
		n = (n & 1)? (3*n+1)>>1 : (n>>1);
		if(st.find(n) == st.end())
		{
			st.insert(n);
		}
		else
			break;
	}
}

int main()
{
	int num;
	vector<int> v;
	set<int> st;
	cin >> num;
	for(int i=0;i<num;++i)
	{
		int t;
		cin >> t;
		v.push_back(t);
		test_loop(st,t);
	}
	vector<int> ans;
	for(int i=0;i<v.size();++i)
	{
		if(st.find(v[i]) == st.end())
		{
			ans.push_back(v[i]);
		}
	}
	sort(ans.begin(),ans.end(),greater<int>());
	for(int i=0;i<ans.size();++i)
	{
		cout<<ans[i];
		if(i != ans.size()-1)
			cout<<" ";
	}
	return 0;
}