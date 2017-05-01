#include <iostream>
#include <algorithm>
using namespace std;

void int2c(int n,char* x)
{
	for(int i=0;i<4;++i)
	{
		x[i] = n%10;
		n /= 10;
	}
}

int main()
{
	int n;
	cin >> n;
	char a[4] ;
	int2c(n,a);
	do
	{
	sort(a,a+4);
	int n1 = a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
	int n2 = a[3]*1000 + a[2]*100 + a[1]*10 + a[0];
	n = n2 - n1;
	if (n == 0)
	{
		printf("%04d - %04d = %04d\n",n2,n1,0);
		break;
	}
	else
	{
		int2c(n,a);
		printf("%04d - %04d = %04d\n",n2,n1,n);
	}
	}while (n != 6174);
	return 0;
}