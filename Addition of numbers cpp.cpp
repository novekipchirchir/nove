//addition of numbers
#include<iostream>
using namespace std;
int main(){
int i,x,y,sum=0;
cout<<"Enter the starting point"<<endl;
cin>>x;
cout<<"Enter the ending point"<<endl;
cin>>y;
  for(i=x;i<=y;i++)
{
	cout<<i<<endl;
	sum+=i;}
	cout<<"The sum of x and y"<<sum;
	return 0;
}