#include <iostream>
#include <string>
using namespace std;
int indexOf(const string& s1, const string& s2)
{
    for (int i = 0; i <= s2.size() - s1.size(); i++)
    {
        if (s2.substr(i, s1.size()) == s1)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    string str1;
    string str2;
    cout << "Enter the first string : ";
    getline(cin, str1);
    cout << "Enter the second string : ";
    getline(cin, str2);
    int n = indexOf(str1, str2);
    if (n != -1)
    {
        cout << "indexOf " <<"("<< str1 << ", " << str2 <<")"<< " is " << n << endl;
    }
    else
    {
        cout << "indexOf(" << str1 << ", " << str2 << ") is -1" << endl;
    }
    return 0;
}

