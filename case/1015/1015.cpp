#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

class stu
{
public:
	int No;
	int s1;
	int s2;
	int score;
	void fu(int a,int b,int c)
	{
		No = a;
		s1 = b;
		s2 = c;
		score = b+c;
	}
	void display()
	{
		printf("%d %d %d\n",No,s1,s2);
	}
	bool operator<(const stu& s) const
	{
		if (score != s.score)
			return score>s.score;
		else
		{
			if( s1!=s.s1)
				return s1>s.s1;
			else
				return No<s.No;
		}
	}
};

int main()
{
	int Num = 0;
	int L = 0;
	int H = 0;
	cin >> Num >> L >> H;
	int count = 0;
	vector<stu> ans1;
	vector<stu> ans2;
	vector<stu> ans3;
	vector<stu> ans4;
	stu info;
	for(int i=0;i<Num;++i)
	{
		int a,b,c;
		cin >> a >> b >> c;
		info.fu(a,b,c);
		if(info.s1>=L && info.s2 >= L)
		{
			++count;
			if(info.s1>=H && info.s2>=H)
				ans1.push_back(info);
			else if (info.s1>=H && info.s2<H)
				ans2.push_back(info);

			else if(info.s1<H && info.s2<H &&info.s1>=info.s2 )
				ans3.push_back(info);
			else
				ans4.push_back(info);
		}
	}
	sort(ans1.begin(),ans1.end());
	sort(ans2.begin(),ans2.end());
	sort(ans3.begin(),ans3.end());
	sort(ans4.begin(),ans4.end());
	cout<<count<<endl;
	vector<stu>::iterator it;
	for(it=ans1.begin();it!=ans1.end();++it)
	{
		it->display();
	}
	for(it=ans2.begin();it!=ans2.end();++it)
	{
		it->display();
	}
	for(it=ans3.begin();it!=ans3.end();++it)
	{
		it->display();
	}
	for(it=ans4.begin();it!=ans4.end();++it)
	{
		it->display();
	}
	return 0;
}