#include<iostream>
using namespace std;
int main()
{
	string x;
	int y,math,eng,sci;
	float per,sum;
	
	cout<<"Enter Your Name :\n";
	cin>>x;
	cout<<"Enter Your Roll Number  :";
	cin>>y;
	cout<<"Enter Your 3 sub marks\n";
	cin>>math>>eng>>sci;
	cout<<"Your Name = "<<x<<endl<<"Roll Number = "<<y<<endl;
	cout<<"Maths = "<<math<<endl<<"English = "<<eng<<endl<<"Science = "<<sci;
	
	sum=math+eng+sci;
	per=sum/3;
	
	cout<<"\nTotal Marks = "<<sum;
	cout<<"\nPercentage = "<<per;
	
	
	return 0;
}