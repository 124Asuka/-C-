#include<iostream>
using namespace std;
int main()
{
	int a=1;
	do
	{
		if(a%10==7||a/10==7)
		{
			cout<<"������"<<endl;
		}
		else
		{
			cout<<a<<endl;
		}
		a++;
	}while(a<101);
	return 0;
}
