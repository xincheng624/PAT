#include <iostream>
#include <math.h>
using namespace std;

int round1(double a)
{
	int t;
	t = floor(a);
	(a-t) >= 0.5? ++t:t;
	return t;
}

int main()
{
	double c1,c2;
	const int CLK_TCK = 100;
	cin >> c1 >> c2;
	int h,m,s;
	double sum;
	sum = (c2 - c1)/CLK_TCK;
	s = round1(sum);
	h = s / 3600;
	s = s % 3600;
	m = s / 60;
	s = s % 60;
	printf("%02d:%02d:%02d\n",h,m,s);
}