#include <iostream>

using namespace std;

char wrap(char c, int key)
{
    if (isalpha(c))
    {
        c += key;
        if (islower(c))
        {
            if (c > 'z')
                c = 'a' + (c - 'z' - 1);
            else if (c < 'a')
                c = 'z' - (c - 'a' - 1);
        }
        else if (isupper(c))
        {
            if (c > 'Z')
                c = 'A' + (c - 'Z' - 1);
            else if (c < 'A')
                c = 'Z' - (c - 'A' - 1);
        }
    }
    return c;
}

int main()
{
    int n;
    string str;
    int key;
    cout << "number of chars: ";
    cin >> n;
    cout << "chars: ";
    cin >> str;
    cout << "key: ";
    cin >> key;

    for (char &c : str)
    {
        c = wrap(c, key);
    }
    cout << "encrypted into: " << str;
    return 0;
}
