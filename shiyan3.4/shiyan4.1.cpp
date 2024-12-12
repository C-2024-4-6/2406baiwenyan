#include <iostream>
using namespace std;
bool com(int x, int i, int num[10])
{
	for (int i = 0; i <= 9;)
	{
		if (x != num[i])
		{
			++i;
		}
		else
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int num[10] = {};
	int n = 0;
	int x=0;
	cout << "Enter the 10 numbers" << endl;
	for (int i = 0; i <= 9; ++i)
	{
		cin >> x;
		if (com(x,i,num))
		{
			num[n] = x;
			++n;
		}
	}
	for (int j = 0; j < n; ++j)
	{
		cout <<num[j] << endl;
	}
	return 0;
}

