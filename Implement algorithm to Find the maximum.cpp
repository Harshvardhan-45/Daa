#include <iostream>
using namespace std;
int main()
{
    int N, i, left, right, target;
    cout << "Size of Array:";
    cin >> N;
    int A[N];
    left = 0;
    right = N - 1;
    cout << "Enter the Elements:";
    for (i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int mid1, mid2, maximum = A[0];
    while (left <= right)
    {
        mid1 = left + ((right - left) / 3);
        mid2 = left + (2 * ((right - left) / 3));
        maximum = max(maximum, A[mid1]);
        maximum = max(maximum, A[mid2]);
        if (A[mid1] > A[mid2])
        {
            right = mid2 - 1;
        }
        else
        {
            left = mid1 + 1;
        }
    }
    cout << "Maximun Element=" << maximum;
}
