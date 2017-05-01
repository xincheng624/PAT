#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	long long p;
	cin >> N >> p;
	long long s[100000] = {};
	int count = 1;
	for ( int i = 0; i < N; ++i )
	{
		cin >> s[i];
	}
	sort( s, s+N );

	long long mp = 0;
	for( int i = 0; i < N; ++i )
	{
		for( int j = i + count; j < N; ++j )
		{
			mp = s[i] * p;
			if ( s[j] <= mp )
			{
				if( j - i + 1 > count )
					count = j - i + 1;
			}
			else
				break;
		}
	}
	cout<<count<<endl;
	return 0;
}