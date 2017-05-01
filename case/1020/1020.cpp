#include <iostream>
#include <algorithm>
using namespace std;

class mooncake
{
public:
	double stock;
	double price;
	double sp;
	mooncake():stock(0),price(0),sp(0){}
	bool operator<(const mooncake& m1) const
	{
		return price>m1.price;
	}
};

int main()
{
	int n;
	int D;
	cin >> n >> D;
	mooncake m[1000] = {};
	for(int i=0;i<n;++i)
	{
		cin>>m[i].stock;
	}
	for(int i=0;i<n;++i)
	{
		cin>>m[i].sp;
		m[i].price = m[i].sp/m[i].stock;
	}
	sort(m,m+n);
	double sum = 0;
	int i = 0;
	while( D != 0 && i<n)
	{
		if( D >= m[i].stock)
		{
			sum += m[i].sp;
			D -= m[i].stock;
		}
		else
		{
			sum += m[i].price*D;
			break;
		}
		++i;
	}
	printf("%.2lf",sum);
	return 0;
}