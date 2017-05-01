#include <iostream>
#include <string>
using namespace std;

class RationalNumber
{
public:
	long long fronti;
	long long f;
	long long n;
	RationalNumber(){}
	RationalNumber( long long ff, long long nn ):f(ff),n(nn),fronti(0)
	{
		simple();
	}


	RationalNumber operator+( const RationalNumber& r )
	{
		RationalNumber tmp;
		tmp.fronti = 0;
		tmp.f = (this->fronti*this->n + this->f)*r.n + (r.fronti*r.n +r.f)*this->n;
		tmp.n = this->n * r.n;
		tmp.simple();
		return tmp;		
	}

	RationalNumber operator-( const RationalNumber& r )
	{
		RationalNumber tmp;
		tmp.fronti = 0;
		tmp.f = (this->fronti*this->n + this->f)*r.n - (r.fronti*r.n +r.f)*this->n;
		tmp.n = this->n * r.n;
		tmp.simple();
		return tmp;		
	}

	RationalNumber operator*( const RationalNumber& r )
	{
		RationalNumber tmp;
		tmp.fronti = 0;
		tmp.f = (this->fronti*this->n + this->f)* (r.fronti*r.n +r.f);
		tmp.n = this->n * r.n;
		tmp.simple();
		return tmp;		
	}

	RationalNumber operator/( const RationalNumber& r )
	{
		RationalNumber tmp;
		tmp.fronti = 0;
		if ( r.f == 0 && r.fronti == 0 )
		{
			tmp.n = 0;
			return tmp;
		}
		else
		{
			tmp.f = (this->fronti*this->n + this->f) * r.n;
			tmp.n = this->n * (r.fronti*r.n +r.f);
			tmp.simple();
			return tmp;		
		}
	}


	void simple()
	{
		long long m = this->f;
		long long nl = this->n;
		while ( nl != 0 )
		{
			long long r = m % nl;
			m = nl;
			nl = r;
		}
		this->f /= abs(m);
		this->n /= abs(m);
		if ( n < 0 )
		{
			f *= -1;
			n *= -1;
		}

		if ( f*n > 0 || ( f*n<0 && -f>=n ))
		{
			fronti = f/n;
			f = abs(f%n);
			n = abs(n);
		}
		else if ( f*n == 0 )
		{
			fronti = 0;
			f = 0;
		}

	}

	void display( bool s = 0 )
	{
		if ( n == 0 )
			cout<<"Inf";
		else
		{
			if ( f == 0 )
			{
				if ( fronti < 0 )
					cout<<"("<<fronti<<")";
				else
					cout<<fronti;
			}
			else
			{
				if ( fronti < 0 )
					cout<<"("<<fronti<<" "<<f<<"/"<<n<<")";
				else if ( fronti != 0 )
					cout<<fronti<<" "<<f<<"/"<<n;
				else if ( fronti == 0 )
				{
					if ( f > 0 )
						cout<<f<<"/"<<n;
					else
						cout<<"("<<f<<"/"<<n<<")";
				}
			}
		}
	}

};



int main()
{
	long long a,b,c,d;
	char e,f;
	cin>>a>>e>>b>>c>>f>>d;
	RationalNumber t(a,b);
	RationalNumber p(c,d);
	RationalNumber l = t + p;
	t.display(true);
	cout<< " + ";
	p.display(true);
	cout<< " = ";
	l.display(true);
	cout<<endl;


	l = t - p;
	t.display(true);
	cout<< " - ";
	p.display(true);
	cout<< " = ";
	l.display(true);
	cout<<endl;

	l = t * p;
	t.display(true);
	cout<< " * ";
	p.display(true);
	cout<< " = ";
	l.display(true);
	cout<<endl;
	
	l = t / p;
	t.display(true);
	cout<< " / ";
	p.display(true);
	cout<< " = ";
	l.display(true);
	cout<<endl;
	return 0;
}