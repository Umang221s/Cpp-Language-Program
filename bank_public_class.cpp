#include<iostream>
using namespace std;

class parents
{
	string bankname,IFSC;
	int ac;
	public:
		void set()
		{
			cout<<"Enter Bankname - IFSC code & Ac NUmber :";
			cin>>bankname>>IFSC>>ac;
			cout<<"Bankname = "<<bankname<<"\nIFSC code = "<<IFSC<<"\nAccount Number = "<<ac<<endl;
			
		}
		
};
class child : public parents
{
	
};

int main()
{
	child p;
	p.set();
	
	return 0;
}