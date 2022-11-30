#include <bits/stdc++.h> 
using namespace std;

class Job
{
public:
    char id;
    int deadLine, profit;
    Job(char id, int d, int p)
    {
        this->id = id;
        this->deadLine = d;
        this->profit = p;
    }
};

struct DisjointSet
{
    int *parent;

    DisjointSet(int n)
    {
        parent = new int[n + 1];

        for (int i = 0; i <= n; i++)
            parent[i] = i;
    }

    int find(int s)
    {
        if (s == parent[s])
        {
            return s;
        }
        return parent[s] = find(parent[s]);
    }

    void merge(int u, int v)
    {
        parent[v] = u;
    }
};

bool cmp(Job a, Job b)
{
    return (a.profit > b.profit);
}
int findMaxDeadline(vector<Job> Jobs)
{
    int mx = 0;
    for (int i = 0; i < Jobs.size(); i++)
    {
        mx = max(mx, Jobs[i].deadLine);
    }
    return mx;
}

int printJobScheduling(vector<Job> Jobs)
{
    sort(Jobs.begin(), Jobs.end(), cmp);

    int maxDeadline = findMaxDeadline(Jobs);
    DisjointSet ds(maxDeadline);
    for (int i = 0; i < Jobs.size(); i++)
    {
        int availableSlot = ds.find(Jobs[i].deadLine);

        if (availableSlot > 0)
        {
            ds.merge(ds.find(availableSlot - 1), availableSlot);
            cout << Jobs[i].id << " ";
        }
    }
}

int main()
{
    vector<Job> jobs = {{'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, {'d', 1, 25}, {'e', 3, 15}};

    cout << "Job Sequence for maximum profit :" << endl;
    printJobScheduling(jobs);
    return 0;
}
