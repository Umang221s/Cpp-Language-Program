#include<iostream>
using namespace std;

int main()
{
	int a,b,temp;
	cout<<"Enter First Number :";
	cin>>a;
	cout<<"Enter Secound Number :";
	cin>>b;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"\nFirst Number :"<<a<<"\nSecound Number :"<<b;
	
	return 0;
}