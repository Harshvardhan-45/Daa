#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1;
    int j = nums1.size() - 1;
    int k = 0;
    while (i >= 0)
    {
        nums1[j] = nums1[i];
        j--;
        i--;
    }
    i = n;
    j = 0;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] < nums2[j])
        {
            nums1[k++] = nums1[i++];
        }
        else
        {
            nums1[k++] = nums2[j++];
        }
    }
    for (i; i < nums1.size(); i++)
        nums1[k++] = nums1[i];
    for (j; j < nums2.size(); j++)
        nums1[k++] = nums2[j];
}
int main()
{
    int m, n;
    cin >> m;
    cin >> n;
    vector<int> nums1(m + n);
    for (int i = 0; i < m; i++)
        cin >> nums1[i];
    vector<int> nums2(n);
    for (int i = 0; i < n; i++)
        cin >> nums2[i];
    merge(nums1, m, nums2, n);
    for (int i = 0; i < m + n; i++)
        cout << nums1[i] << " ";
}
