#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class List
{
public:
	int address;
	int data;
	int next;
	List(int a,int b,int c):address(a),data(b),next(c){}
};

int main()
{
	int hAddr,N,k;
	cin >> hAddr >> N >> k;
	vector<pair<int,int>> L(100000);
	vector<List> L1;
	int a,b,c;
	for(int i=0;i<N;++i)
	{
		cin >> a >> b >> c;
		pair<int,int> p;
		p.first = b;
		p.second = c;
		L[a] = p;
	}
	
	int front = hAddr;
	int count = 0;
	while(front != -1)
	{
		++count;
		L1.push_back(List(front,L[front].first,L[front].second));
		front = L[front].second;
	}
	for(int i=0;i<count/k;++i)
	{
		reverse(L1.begin()+i*k,L1.begin()+(i+1)*k);
	}

	for(int i=0;i<L1.size()-1;++i)
	{
		printf("%05d %d %05d\n",L1[i].address,L1[i].data,L1[i+1].address);
	}
	printf("%05d %d %d\n",L1[L1.size()-1].address,L1[L1.size()-1].data,-1);
	return 0;
}