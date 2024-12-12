#include<iostream>
using namespace std;

int calculate(int day)
{
	if (day==10)
	{
		return 1;
	}
	else
	{
		return (calculate(day+1)+1)*2;
	}
}


int main()
{
	int totalPeaches = calculate(1);
	cout<<"First day monkey had "<<totalPeaches<<" peaches"<<endl;
	
	return 0;
}
