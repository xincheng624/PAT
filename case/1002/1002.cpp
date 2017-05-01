#include <iostream>
#include <vector>
using namespace std;
int main()
{
char n[101] = {0};
char* p = n;
cin >> n;
int sum = 0;
while(*p != '\0')
{
sum += *p - '0';
p++;
}
char sz[4] = {0};
/*int i = 0;
do
{
sz[i++] = sum%10;
sum = sum/10;
}while(sum != 0);*/
//int x = 0;
char* x = sz;
sprintf(sz,"%d",sum);
while(*x != '\0')
{
switch(*x)
{
case '1': cout<<"yi";break;
case '2': cout<<"er";break;
case '3': cout<<"san";break;
case '4': cout<<"si";break;
case '5': cout<<"wu";break;
case '6': cout<<"liu";break;
case '7': cout<<"qi";break;
case '8': cout<<"ba";break;
case '9': cout<<"jiu";break;
case '0': cout<<"ling";break;
default:
break;
}
x++;
if(*x != 0)
cout<<" ";
else
	cout<<endl;

}

return 0;
}