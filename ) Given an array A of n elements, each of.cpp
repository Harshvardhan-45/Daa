#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, i;
    cin >> N;
    vector<int> A(N);
    for (i = 0; i < N; i++)
        cin >> A[i];
    map<int, int> m;
    for (i = 0; i < N; i++)
        m[A[i]]++;
    for (auto it : m)
    {
        cout << it.first << " ";
    }
    return 0;
}
