#include <iostream>
using namespace std;

int main()
{
	int N;
	char ch;
	cin >> N >> ch;
	int i = 0;
	while( 2*i*i-1<= N)
	{
		++i;
	}
	--i;
	for (int k=1;k<=i;++k)
	{
		for(int j=1;j<=2*i-1;++j)
		{
			if( j>=k && j<=2*i-k )
				cout<<ch;
			else if( j<k)
				cout<<' ';
		}
		cout<<endl;
	}

	for( int k=2;k<=i;++k)
	{
		for(int j=1;j<=2*i-1;++j)
		{
			if( j>=i-(k-1) && j<=i+k-1 )
			{
				cout<<ch;
			}
			else if ( j<i-(k-1))
				cout<<' ';		
		}
		cout<<endl;
	}
	cout<<N-2*i*i+1<<endl;
}