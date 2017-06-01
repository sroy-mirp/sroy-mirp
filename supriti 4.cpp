#include<iostream>
using namespace std;
int main()
{
  int n,a,b,c,d,e,f;
  cout<<"enter number: "<<endl;
  cin>>n;
  a=n%10;
  b=n%100;
  e=b/10;
  c=n%1000;
  f=c/100;
  d=a+e+f;
  cout<<"Sum of last three digits:"<<d<<endl;
}
 
