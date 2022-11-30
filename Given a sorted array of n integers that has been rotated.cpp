#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, i, R, target;
    cout << "Size of Array:";
    cin >> N;
    vector<int> A(N);
    cout << "Enter Elements:";
    for (i = 0; i < N; i++)
        cin >> A[i];
    cout << "No. of times to rotate:";
    cin >> R;
    cout << "Element to be found:";
    cin >> target;
    for (i = 0; i < N; i++)
    {
        if (A[i] == target)
        {
            cout << "Index:" << R + i;
            break;
        }
        if (i == N - 1)
            cout << "Not Found";
    }
}
