#include <iostream>
using namespace std;
int main()
{
    int total_sum, sum = 0, N;
    int A[N];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        sum += A[i];
    }
    total_sum = (N * (N + 1)) / 2;
    if (total_sum == sum)
        cout << "THERE IS NO REPEATED NUMBER";
    else
        cout << "THERE IS REPEATED NUMBER";
}
