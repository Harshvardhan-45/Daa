#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int N, i, j, k;
    cin >> N;
    cin >> k;
    vector<int> A(N);
    vector<int> B(N);
    for (i = 0; i < N; i++)
        cin >> A[i];
    for (i = 0; i < N; i++)
        cin >> B[i];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    i = 0;
    j = N - 1;
    int flag = 1;
    while (i < N && j >= 0)
        if (A[i] + B[j] > k)
            j--;
        else if (A[i] + B[j] < k)
            i++;
        else
        {
            flag = 0;
            break;
        }
    if (flag)
        cout << "Not Exist";
    else
        cout << "Exist a=" << A[i] << " & b=" << B[j];
}