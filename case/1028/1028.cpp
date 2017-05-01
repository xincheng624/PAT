#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	string name;
	string b;
	Person(){}
	Person(string n,string bb):name(n),b(bb){}
	bool operator<( const Person p )
	{
		if ( this->b >= p.b )
			return false;
		else
			return true;
	}
};


bool test( string tmp )
{
	if ( tmp < "18140906" || tmp > "20140906" )
		return false;
	else
		return true;
}

int main()
{
	int N;
	cin >> N;
	Person p;
	Person min;
	Person max;
	int count = 0;
	for ( int i = 0; i < N; ++i )
	{
		cin >> p.name; 
		string birthday;
		cin >> birthday;
		birthday.erase(4,1);
		birthday.erase(6,1);
		p.b = birthday;
		bool b = test( birthday);
		if ( b == true )
		{
			++count;
			if ( count == 1 )
			{
				min = p;
				max = p;
			}

			if ( p < min )
				min = p;
			else if ( max < p )
				max = p;
		}
	}


	cout << count ;
	if( min.name != "")
		cout<< " "<< min.name<< " " << max.name;
}