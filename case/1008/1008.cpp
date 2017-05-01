#include <iostream>
using namespace std;

void reverse_arr(int* a,int m,int n)
{
	for(int i=0;i<(n-m+1)/2;++i)
	{
		int tmp=a[m+i];
		a[m+i] = a[n-i];
		a[n-i] = tmp;
	}
}

int main()
{
	int n = 0;
	int m = 0;
	cin >> n;
	cin >> m;
	int* x = new int[n];
	m %= n;
	for(int i=0;i<n;++i)
	{
		cin>>x[i];
	}
	reverse_arr(x,0,n-m-1);
	reverse_arr(x,n-m,n-1);
	reverse_arr(x,0,n-1);
	for(int i=0;i<n;++i)
	{
		cout<<x[i];
		if(i != n-1)
		{
			cout<<" ";
		}
	}
	cout<<endl;
	return 0;
}