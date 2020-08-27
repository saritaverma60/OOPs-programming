/* print the series 1 2 4 8 16 32  ....*/
#include <iostream>
using namespace std;
int main()
{
int i,n;
cout<<"enter the limit of series";
cin>>n;
for(i=1;i<=n;i*=2)
cout<<i<<" ";
return 0;
}
