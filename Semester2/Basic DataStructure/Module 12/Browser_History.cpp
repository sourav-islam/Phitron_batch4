#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> list1;
    string s;
    while (true)
    {
        cin >> s;
        if (s == "end")
            break;
        list1.push_back(s);
    }

    int q;
    cin >> q;
    auto it1 = list1.begin();
    while (q--)
    {
        string command;
        cin >> command;
        if (command == "visit")
        {
            string address;
            cin >> address;
            auto it = find(list1.begin(), list1.end(), address);

            if (it != list1.end())
            {
                it1 = it;
                cout << address << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {

            if (next(it1) != list1.end())
            {
                it1++;
                cout << *it1 << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
            // cout << *next(it1, 1) << endl;
            //  it1 = next(it1, 1);
        }
        else if (command == "prev")
        {
            if (it1 != list1.begin())
            {
                it1--;
                cout << *it1 << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
            // cout << *prev(it1, 1) << endl;
            // it1 = prev(it1, 1);
        }
    }

    return 0;
}

/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> list1;
    string s;
    while (true)
    {
        cin >> s;
        if (s == "end")
            break;
        list1.push_back(s);
    }

    int q;
    cin >> q;

    auto it = list1.begin(); // Initialize iterator at the beginning

    while (q--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string address;
            cin >> address;
            auto find_it = find(list1.begin(), list1.end(), address);
            if (find_it != list1.end())
            {
                it = find_it; // Update iterator position
                cout << address << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            if (next(it) != list1.end())
            {
                it++;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (it != list1.begin())
            {
                it--;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else
        {
            // Handle other commands if needed
        }
    }

    return 0;
} */
