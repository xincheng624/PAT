#include <iostream>
using namespace std;

int main()
{
	int s[100001] = {};
	int N;
	cin >> N;
	for ( int i = 0; i < N; ++i )
	{
		int j;
		int mark;
		cin >> j >> mark;
		s[j] += mark;
	}
	int max = 0;
	int j = 0;
	for ( int i = 1; i <= N; ++i )
	{
		if ( s[i] > max )
		{
			max = s[i];
			j = i;
		}
	}
	cout<<j<<" "<<max<<endl;

}