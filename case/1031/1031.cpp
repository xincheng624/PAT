#include <iostream>
using namespace std;

int p[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
int m[11] = {1,0,10,9,8,7,6,5,4,3,2};

bool test( char b[] )
{
	int sum = 0;
	for ( int j = 0; j < 17; ++j )
	{
		if ( b[j] >= '0' && b[j] <= '9' )
		{
			sum += ( b[j] - '0' )* p[j];
		}
		else
			return false;
	}
	int mm = sum % 11;
	if ( m[mm] == ( b[17]-'0' ) || ( m[mm] == 10 && b[17] == 'X' ) )
	{
		return true;
	}
	else
		return false;
}

int main()
{
	int N;
	cin >> N;
	char s[19];
	bool f = true;
	for ( int i = 0; i < N; ++i )
	{
		cin >> s;
		if ( !test(s) ) {
			cout<<s<<endl;
			f = false;
		}
	}
	if ( f == true )
		cout<<"All passed"<<endl;
	return 0;
}