#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string arr[] = {"cat", "dog", "tgc", "god", "act"};
    vector<pair<string, int>> v;
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        string sortedString = arr[i];
        sort(sortedString.begin(), sortedString.end());
        v.push_back({sortedString, i});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << arr[v[i].second] << " ";
    }
    return 0;
}