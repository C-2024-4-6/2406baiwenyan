#include <iostream>
#include <string>
using namespace std;
void count(const char s[], int counts[])
{
    for (int i = 0; i < 26; ++i)
    {
        counts[i] = 0;
    }
    while (*s) {
        char c = *s;
        if (c >= 'A' && c <= 'Z')
        {
            c = c + ('a' - 'A');
        }
        if (c >= 'a' && c <= 'z')
        {
            counts[c - 'a']++;
        }
        ++s;
    }
}
int main() {
    string input;
    int counts[26];
    cout << "Enter a string: ";
    getline(cin, input);
    count(input.c_str(), counts);
    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            cout << char('a' + i) << ": " << counts[i] << " times " << endl;
        }
    }
    return 0;
}

