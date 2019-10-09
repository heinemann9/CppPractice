#include <iostream>
#include <map>
#include <string>
using namespace std;

template <typename K, typename V>
void print_map(map<K, V>& s)
{
    for (typename map<K, V>::iterator it = s.begin(); it != s.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
}

template <typename K, typename V>
void search_and_print(map<K, V>& m, K key)
{
    auto it = m.find(key);
    if (it != m.end())
    {
        cout << key << " --> " << it->second << endl;
    }
    else
    {
        cout << key << " doesn't have value in list" << endl;
    }
}

int main()
{
    map<string, double> pitcher_list;

    pitcher_list.insert(pair<string, double>("ksa", 2.23));
    pitcher_list.insert(pair<string, double>("ksa1", 2.93));
    pitcher_list.insert(pair<string, double>("ksa2", 2.95));

    pitcher_list.insert(make_pair("ksa3", 3.02));
    pitcher_list.insert(make_pair("ksa4", 3.03));
    pitcher_list.insert(make_pair("ksa5", 3.05));

    pitcher_list["ksa6"] = 3.56;
    pitcher_list["ksa7"] = 3.76;
    pitcher_list["ksa8"] = 3.96;

    print_map(pitcher_list);

    search_and_print(pitcher_list, string("ksa5"));
    search_and_print(pitcher_list, string("ksa9"));

    return 0;
}
