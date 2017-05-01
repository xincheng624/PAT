#include <iostream>
#include <string>
using namespace std;

string test(char* x)
{
	int a = 0;
	while (*x != 'P')
	{
		if(*x != 'A')
		{
			return "NO\n";
		}
		else
			a++;
		x++;
	}
	x++;
	int b = 0;
	while (*x != 'T')
	{
		if(*x != 'A')
		{
			return "NO\n";
		}
		else
			b++;
		x++;
	}
	x++;
	int c = 0;
	while (*x != '\0')
	{
		if(*x != 'A')
		{
			return "NO\n";
		}
		else
			c++;
		x++;
	}
	if (a*b == c && b != 0)
		return "YES\n";
	else
		return "NO\n";
}

int main()
{
	int n = 0;
	cin >> n;
	char s[10][100] = {0};
	int i = 0;
	while(n--)
	{
		cin >> s[i++];
	}
	n = 0;
	while(i--)
	{
		cout<<test(s[n++]);
	}
	
	return 0;
}