#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void track(vector<int> &A, int inp)
{
    A.push_back(inp);
}
int getRankOfNumber(vector<int> &A, int x)
{
    int count = 0, flag = 1;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == x && flag == 1)
            flag = 0;
        else if (A[i] == x)
            count++;
        else if (A[i] < x)
            count++;
        else
            break;
    }
    return count;
}
int main()
{
    int N, inp, x;
    cout << "Enter size of Array:";
    cin >> N;
    vector<int> A;
    cout << "Enter the Elements:";
    for (int i = 0; i < N; i++)
    {
        cin >> inp;
        track(A, inp);
    }
    sort(A.begin(), A.end());
    cout << "Enter the X=";
    cin >> x;
    cout << "getRankOfNumber(" << x << ")= " << getRankOfNumber(A, x);
    return 0;
}