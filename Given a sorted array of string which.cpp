#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string target = "ball";
    vector<string> A{"at", "", "", "ball", "", "", "cat", "", "", "dog", "", ""};
    int low = 0, high = A.size() - 1, flag = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        while (A[mid] == "")
            mid++;
        if (A[mid] > target)
            high = mid - 1;
        else if (A[mid] < target)
            low = mid + 1;
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << "String Found";
    else
        cout << "String Not Found";
}
