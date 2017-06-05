#include<iostream>
using namespace std;
int main()
{         
 int age, x, ch;
 age=x=64;
 do
 {     
  x/=2;
  cout<<"Is your age "<<age<<" ?\n"
      <<"If yes \t press 0\n"
      <<"If greater than "<<age<<"\t press 1\n"
      <<"If less than "<<age<<"\t press 2\nYour choice is ";
  cin>>ch;
  if(ch==1)
  age+=x;
  else if(ch==2)
  age-=x;
 }while(ch != 0);
 cout<<"Your age is "<<age<<endl;
 
 return 0;
}
