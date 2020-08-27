/*to find greatest number between three variables*/
#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter the three numbers";
cin>>a>>b>>c;
if ((a>b)&& (a>c))
cout<<a<<"is greatest number";
else if ((b>a)&& (b>c))
cout<<b<<"is greatest number";
else if ((c>a)&& (c>b))
cout<<c<<"is greatest number";
else
cout<<"all are equal";
return 0;
}
