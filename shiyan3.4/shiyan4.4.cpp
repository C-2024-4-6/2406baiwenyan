#include <iostream>
#include <vector>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
    int size = size1 + size2;
    for (int i = 0; i < size1; i++)
    {
        list3[i] = list1[i];
    }
    for (int j = 0; j < size2; j++)
    {
        list3[size1 + j] = list2[j];
    }
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - 1 - i; ++j)
        {
            if (list3[j] > list3[j + 1])
            {
                swap(list3[j], list3[j + 1]);
            }
        }
    }
}
int main()
{
    int size1, size2;
    cout << "Enter list1: ";
    cin >> size1;
    vector<int> list1(size1);
    for (int i = 0; i < size1; ++i)
        cin >> list1[i];
    cout << "Enter list2: ";
    cin >> size2;
    vector<int> list2(size2);
    for (int i = 0; i < size2; ++i)
        cin >> list2[i];
    vector<int> list3(size1 + size2);
    merge(list1.data(), size1, list2.data(), size2, list3.data());
    cout << "The merged list is: ";
    for (int i = 0; i < list3.size(); i++)
    {
        cout << list3[i] << " ";
    }
    return 0;
}

