/* print the sum of 1+X2/2! +X3/3! +X4/4!....xn/n!*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int i,n,x,f=1;
float sum=1.0;
cout<<"enter the limit of series";
cin>>n;
cout<<"enter the of X";
cin>>x;
for(i=1;i<=n;i++)
sum=sum+pow(x,i)/f*i;
cout<<"sum of series"<<sum;
return 0;
}
