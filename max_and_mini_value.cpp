#include<iostream>
using namespace std;
int main (){
int n1,n2,n3;
cout<<"enter the minimum value:\n";
cin>>n1>>n2>>n3;

if ((n1<n2)&&(n2<n3)){
cout<<"minimum value:"<<n1;
}
else if ((n2<n1)&&(n2<n3)){
cout<<"minimum value:"<<n2;
}
else{
cout<<"minimum value:"<<n3;
}
return 0;
}
