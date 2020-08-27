/* check weather no palindrome or not*/
#include <iostream>
using namespace std;
int main()
{int num,r,n,rev;
r=0;
cout<<"enter the number to be check";
cin>>num;
n=num;
do
{rev=num%10;
r=r*10+rev;
num/=10;
}
while(num!=0);
if (n==r)
cout<<"it is a palindrome";
else
cout<<"it is not a palindrome";
}
