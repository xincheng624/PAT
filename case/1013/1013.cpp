#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
	bool m = true;
	for(int j=2;j<=(int)sqrt((double)n);++j)
	{
		if( n%j == 0)
		{
			m = false;
			break;
		}
	}
	return m;
}

int main()
{
	int m = 0;
	int n = 0;
	cin >> m >> n;
	int i = 2;
	int j = 0;
	int k = 0;
	while(true)
	{
		if(isPrime(i))
		{
			++j;
			if( m <= j && j < n)
			{
				++k;
				if(k%10 != 0)
					cout<<i<<" ";
				else
					cout<<i<<endl;
			}
			else if(j == n)
				cout<<i<<endl;
			else if(j> n)
				break;
		}
		
		
		++i;
	}
	return 0;
}