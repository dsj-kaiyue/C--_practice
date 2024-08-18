#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, opt, score;
    string name;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>opt;
        if (opt == 1)
        {
            cin >> name >> score;
            mp[name] = score;
            cout << "OK" << endl;
        }
        else if (opt == 2)
        {
            cin >> name;
            if (mp.find(name) == mp.end())
                cout << "Not found" << endl;
            else
                cout << mp[name] << endl;
        }
        else if (opt == 3)
        {
            cin>>name;
            auto it = mp.find(name);
            if (it == mp.end())
                cout << "Not found" << endl;
            else
            {
                mp.erase(it);
                cout << "Deleted successfully" << endl;
            }
        }
        else if (opt == 4)
        {
            cout << mp.size() << endl;
        }
    }
    return 0;
}