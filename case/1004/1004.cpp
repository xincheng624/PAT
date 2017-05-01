#include <iostream>
using namespace std;

class score
{
public:
	char name[11];
	char lesson[11];
	int grade;
	void display()
	{
		cout<<name<<" "<<lesson<<endl;
	}
	
};

int main()
{
	int num = 0;
	cin >> num;
	score* s = new score[num];
	for (int i=0;i<num;++i)
	{
		cin>>s[i].name;
		cin>>s[i].lesson;
		cin>>s[i].grade;
	}
	int maxI = 0;
	int minI = 0;
	int max=0,min=100;
	for (int i=0;i<num;++i)
	{
		if(s[i].grade>max)
		{
			maxI = i;
			max = s[i].grade;
		}
		if(s[i].grade<min)
		{
			minI = i;
			min = s[i].grade;
		}
	}
	s[maxI].display();
	s[minI].display();
	delete[] s;
	return 0;
}