/* print the fibonacci series 0 1 1 2 3 5 8 13*/
#include <iostream>
using namespace std;
int main()
{
int first,second, third;
first=0;
second=1;
cout<<first<<" "<<second<<" ";
third=first+second;
while (third<=13)
{cout<<third<<" ";
first=second;
second=third;
third=first+second;
}
}
