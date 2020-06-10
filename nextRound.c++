#include <iostream>

using namespace std;

int main()
{
    int contest, place;
    cin >> contest >> place;

    int a;
    for (int i = 0; i < place; ++i)
    {
        cin >> a;
        if (a == 0)
        {
            cout << i << endl;
            return 0;
        }
    }

    int b;
    for (int i = place; i < contest; ++i)
    {
        cin >> b;
        if (b != a)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << contest << endl;
    return 0;
}