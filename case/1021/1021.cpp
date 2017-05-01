#include <iostream>
using namespace std;

int main()
{
	char num[1000];
	cin >> num;
	int i = 0;
	int count[10] = {};
	while (num[i] != '\0')
	{
		int c = num[i++] -'0';
		++count[c];
	}
	for(int i=0;i<10;++i)
	{
		if(count[i] != 0)
			cout<<i<<":"<<count[i]<<endl;
	}
	return 0;
}