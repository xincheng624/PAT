#include <iostream>
using namespace std;

int main()
{
	char ss[4][61];
	cin >> ss[0] >> ss[1] >> ss[2] >> ss[3];
	char* x = ss[0];
	char* y = ss[1];
	int i = 0;
	int j = 0;
	while (*(x+i) != '\0')
	{
		if( *(x+i) == *(y+i))
		{
			if('A' <= *(x+i) && *(x+i) <= 'G')
			{
				switch(*(x+i))
				{
				case 'A': cout<<"MON"<<' ';break;
				case 'B': cout<<"TUE"<<' ';break;
				case 'C': cout<<"WED"<<' ';break;
				case 'D': cout<<"THU"<<' ';break;
				case 'E': cout<<"FRI"<<' ';break;
				case 'F': cout<<"SAT"<<' ';break;
				case 'G': cout<<"SUN"<<' ';break;
				}
				break;
			}
		}
		++i;
	}
	++i;
	while (*(x+i) != '\0')
	{
		if ( *(x+i) == *(y+i) )
		{
			if('A' <= *(x+i) && *(x+i) <= 'N')
			{
				cout<<*(x+i)-'A'+10<<":";
				break;
			}
			else if('0'<= *(x+i) && *(x+i) <= '9')
			{
				cout<<'0'<<*(x+i)<<":";
				break;
			}
		}
		++i;
	}
	x = ss[2];
	y = ss[3];
	i = 0;
	while (*(x+i) != '\0')
	{
		if ( *(x+i) == *(y+i) && (*(x+i) >= 'a' && *(x+i) <='z' ||*(x+i) >= 'A' && *(x+i) <='Z' ))
		{
			if(i < 10)
				cout<<'0'<<i<<endl;
			else
				cout<<i<<endl;
			break;
		}
		++i;
	}
}