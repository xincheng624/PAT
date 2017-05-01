#include <iostream>
#include <vector>
using namespace std;

void show(int c,int n,vector<int> d)
{
	while ( c != 0 )
	{
		d.push_back(c%n);
		c /= n;
	}
	
	for(int i=d.size()-1;i>=0;--i)
	{
		cout<<d[i];
	}
}


int main()
{
	int A = 0;
	int B = 0;
	int D = 10;
	cin >> A >> B >> D;
	vector<int> s;
	if( A+B != 0)
		show(A+B,D,s);
	else
		cout<<0;
	cout<<endl;
	return 0;
}