#include<iostream>
using namespace std;
void swap(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}
void bubblesort(double list[], int size)
{
	bool changed = true;
	do {
		changed = false;
		for (int i = 0; i < size - 1; i++)
		{
			if (list[i] > list[i + 1])
			{
				swap(list[i], list[i + 1]);
				changed = true;
			}
		}
	} while (changed);
}
int main()
{
	const int size = 10;
	double list[size]{};
	cout << "Please enter 10 numbers: " << endl;
	for (int j = 0; j < size; j++)
	{
		cin >> list[j];
	}
	bubblesort(list, size);
	cout << "After merge" << endl;
	for (int i = 0; i < size; i++)
	{
		cout <<list[i]<<"\t";
	}
	return 0;
}

