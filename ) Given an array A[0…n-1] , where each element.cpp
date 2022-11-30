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
    vector<int> m(N, 0);
    for (i = 0; i < N; i++)
        m[A[i]]++;
    int max = 0, ans;
    for (i = 0; i < N; i++)
    {
        if (max < m[i])
        {
            max = m[i];
            ans = i;
        }
    }
    cout << ans;
    return 0;
}
