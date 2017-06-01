#include<iostream>
using namespace std;
int main(){
int c90,c80,c70;
cout<<"Enter the value of cutoff mark :";
cin>>c90>>c80>>c70;
if( (c90>c80)&&(c80>c70)){
cout<<"cutoff is valid\n";

int mark;
cout<<"Enter mark:";
cin>>mark;
if ((mark>c90)){
cout<<"grade A:";
}
else if ((mark>c80)){
cout<<"grade B:";
}
if ((mark>c70)){
cout<<"grade C:";
}
else{
cout<<"grade D:";
}}
else
  cout<<"Cutoff is invalid\n";
return 0;
}
