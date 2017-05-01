#include <iostream>
#include <string>
using namespace std;

int ch[26] = {};
int num[10] = {};
int other[4] = {};
int space = 0;
int main()
{
	string bro;
	getline(cin,bro);
	if( bro.length() == 0 )
	{
		cin >> bro;
		cout<<bro;
		return 0;
	}
	for( int i = 0; i < bro.length(); ++i )
	{
		if ( bro[i] >= 'A' && bro[i] <= 'Z' )
		{
			int t = bro[i] - 'A';
			ch[t] = 1;
		}
		else if ( bro[i] >= '0' && bro[i] <= '9' )
		{
			int t = bro[i] - '0';
			num[t] = 1;
		}
		else if ( bro[i] >= '+' && bro[i] <= '.' )
		{
			int t = bro[i] - '0' + 5;
			other[t] = 1;
		}
		else if ( bro[i] == '_' )
		{
			space = 1;
		}
	}
	char test[100001];
	int j = 0;
	cin >> test;
	while ( test[j] != '\0' )
	{
		if ( test[j] >= 'A' && test[j] <= 'Z' && other[0] == 0 )
		{
			int t = test[j] - 'A';
			if ( ch[t] == 0 )
				cout<<test[j];
		}
		else if ( test[j] >= 'a' && test[j] <= 'z' )
		{
			int t = test[j] - 'a';
			if ( ch[t] == 0 )
				cout<<test[j];
		}
		else if ( test[j] >= '0' && test[j] <= '9' )
		{
			int t = test[j] - '0';
			if ( num[t] == 0 )
				cout<<test[j];
		}
		else if ( test[j] >= '+' && test[j] <= '.' )
		{
			int t = test[j] - '0' + 5;
			if ( other[t] == 0 )
				cout<< test[j];
		}
		else if ( test[j] == '_' && space == 0 )
		{
			cout<<test[j];
		}
		++j;
	}
	cout<<endl;
	return 0;
	
}