#include <iostream>
using namespace std;
int main()
{
 int n, sum=0;
 cout<<"Enter a number- ";
 cin>>n;
 for(int i=1; i<=n; i++)
     sum+= 6/(i*i);
 cout<<"Summation = "<<sum;
 return 0;
}
