#include<iostream>
using namespace std;


class kitu
{
	public : int x;
	void fun( int x)
		{
			cout<<"sheet number = "<<x<<endl;
		}
		
};

int main()
{
	kitu k;
	k.fun(37);
}