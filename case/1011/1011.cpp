#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	long long s[10][3];
	for(int i=0;i<num;++i)
	{
		cin>>s[i][1]>>s[i][2]>>s[i][3];
	}
	for(int i=0;i<num;++i)
	{
		if(s[i][1]+s[i][2]>s[i][3])
			cout<<"Case #"<<i+1<<": true"<<endl;
		else
			cout<<"Case #"<<i+1<<": false"<<endl;
		
	}
}