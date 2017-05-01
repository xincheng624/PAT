#include <iostream>
using namespace std;

int main()
{
	char tin[80];
	char rin[80];
	char key[80];
	cin >> tin;
	cin >> rin;
	int j = 0;
	int k = 0;
	
	for( int i = 0; i < 80; ++i )
	{
		bool mark = true;
		if ( tin[i] == '\0' )
			break;

		if ( tin[i] != rin[j] )
		{
			if ( tin[i] <= 'z' && tin[i] >= 'a' )
				tin[i] = tin[i] - 'a' + 'A';
			for ( int l = 0; l <  k; ++l )
			{
				if( tin[i] == key[l] )
					mark = false;
			}
			if ( mark == true )
			{
				key[k] = tin[i];
				if ( key[k] <= 'z' && key[k] >= 'a' )
					key[k] = key[k] - 'a' + 'A';
				++k;
			}

		}
		else
		{
			++j;
		}
	}

	for( int i = 0; i < k; ++i )
	{
		cout<<key[i];
	}
}