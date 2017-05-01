#include <iostream>
using namespace std;

int main()
{
	char A[11],B[11];
	char da,db;
	cin >> A >> da >> B >> db;
	int i = 0;
	int count = 0;
	long long pa = 0;
	long long pb = 0;
	while( A[i] != '\0')
	{
		if( A[i] == da )
		{
			++count;
		}
		++i;
	}
	for(int i=0;i<count;++i)
	{
		pa = pa*10+(da-'0');
	}
	count = 0;
	i = 0;
	while( B[i] != '\0')
	{
		if( B[i] == db )
		{
			++count;
		}
		++i;
	}
	for(int i=0;i<count;++i)
	{
		pb = pb*10+(db-'0');
	}
	cout<<pa+pb<<endl;
	return 0;
}