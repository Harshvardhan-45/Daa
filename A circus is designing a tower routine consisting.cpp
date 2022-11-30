#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> A{
        {65, 100}, {70, 150}, {56, 90}, {75, 190}, {60, 95}, {68, 110}};
    sort(A.begin(), A.end());
    cout << "People Height and Weight from Top to Bottom:" << endl;
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i][0] << " " << A[i][1] << endl;
    }
}