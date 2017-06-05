#include<iostream>
using namespace std;
int main(){
int x[5]={100,2,3,4,5};
for(int i=0;i<5;i++)
cout<<x[i]<<" ";


char name[50]="my_name";
{'m','y','-','n','a','m','e','\0'}
cout<<name<<endl;

cout<<"enter first name";
cin>>name;
//name[i]!='\0'
for (int i=0;i<=50;i++)
cout<<name[i]<<" "<<i<<endl;
cout<<name<<endl;
//print name using loop "Don't use cout<<name"
return 0;
}
