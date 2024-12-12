#include <iostream>
using namespace std;
void calculate(int m, int n, int &gcd, int &lcm);
void calculate(int m, int n, int &gcd, int &lcm)
{
	int a=m, b=n;
	while(b!=0)
	{
		int temp =b;
		b=a%b;
		a=temp;
	}
	gcd=a;
	lcm = (m*n)/gcd;
}
int main() 
{
	int m,n;
	cout<<"Enter two numbers: ";
	cin>>m>>n;
	if(m<=0 || n<=0)
	{
		cout<<"Enter number bigger than 0!";
	}
	int gcd,lcm;
	calculate(m,n,gcd,lcm);
	cout<<"GCD is: "<<gcd<<endl;
	cout<<"LCM is: "<<lcm<<endl;
	return 0;
}

