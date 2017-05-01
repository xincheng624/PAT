#include <iostream>
#include <iomanip>
using namespace std;

int mark = 0;
int count = 0;

void testnum(int* a,int b)
{
	if( b%5 == 0)
	{
		if( b%2 == 0)
			a[0] += b;
	}
	else if( b%5 == 1)
	{
		if( mark++%2 != 0 )
			b *= -1;
		a[1] += b;
	}
	else if( b%5 == 2)
	{
		++a[2];
	}
	else if( b%5 == 3)
	{
		++count;
		a[3] += b;
	}
	else
	{
		if(b > a[4])
			a[4] = b;
	}

}

int main()
{
	int num;
	cin >> num;
	int Num[1000] = {};
	int A[5] = {};
	for(int i=0;i<num;++i)
	{
		cin>>Num[i];
		testnum(A,Num[i]);
	}
	for(int i=0;i<5;++i)
	{
		if(A[i] != 0)
		{
			if(i != 3)
				cout<<A[i];
			else
				cout<<setiosflags(ios::fixed)<<setprecision(1)<<(float)A[i]/count;
		}
		else
		{
			if(i == 1 && mark>0)
				cout<<A[i];
			else
				cout<<"N";
		}
		if(i != 4)
			cout<<" ";
	}
}