#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int s[3]={};

	for(int i=2;i>=0;--i)
	{
		s[i] = num%10;
		num = num/10;
	}
	for(int i=0;i<s[0];++i)
	{
		cout<<"B";
	}
	for(int i=0;i<s[1];++i)
	{
		cout<<"S";
	}
	for(int i=0;i<s[2];)
	{
		cout<<++i;
	}
	cout<<endl;
	return 0;
}