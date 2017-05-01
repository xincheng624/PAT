#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int num;
	cin >> num;
	vector<int> sushu;
	sushu.push_back(2);
	for(int i=3;i<=num;i+=2)
	{
		bool m = true;
		int r = sqrt((double)i);
		for(int j=3;j<=r;++j)
		{
			if(i%j == 0)
			{
				m = false;
			}
		}
		if(m == true)
		{
			sushu.push_back(i);
		}
	}
	int count=0;
	for(int i=0;i<sushu.size()-1;++i)
	{
		if(sushu[i+1]-sushu[i] == 2)
			++count;
	}
	cout<<count<<endl;
	return 0;
}