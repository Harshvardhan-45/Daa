#include <iostream>
#include <algorithm>

#include <queue>
#include <vector>
using namespace std;
vector<pair<int, int>> g[1001];
vector<vector<int>> edges;
const int INF = 1000000009;
void solve(int src, int dest,  int n)
{
    vector<int> dist(n + 1, INF);
    dist[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    vector<int> parent(n+1, -1);
    q.push({0, src});

    while (!q.empty())
    {
        auto p = q.top();
        int node = p.second;
        int d = p.first;
        q.pop();

        for (auto nb : g[node])
        {
            int nn = nb.first, nd = nb.second;
            if (dist[nn] > d + nd)
            {
               parent[nn] = node; 
                dist[nn] = d + nd;

                q.push({dist[nn], nn});
            }
        }
    }
    if(dist[dest]==INF)
        cout << "Not possible to reach at this node from src " << endl; 
    else {
        cout<<"Distance form "<<src<<" "<<dest<<" = "<<dist[dest]<<endl;
        vector<int>path; 
        int i = dest ; 
        while(i!=-1)
        {    
            path.push_back(i);
            i = parent[i];
        }
        reverse(path.begin(),path.end());
        cout << "path = "; 
        for (int i = 0; i < path.size();i++)
        {   
            cout << path[i];
            if(i!=path.size()-1)
                cout << " -> ";
        }
    }
}
int main()
{
    edges.push_back({1, 2, 1});
    edges.push_back({1, 3, 2});
    edges.push_back({2, 3, 1});
    edges.push_back({2, 4, 3});
    edges.push_back({2, 5, 2});
    edges.push_back({3, 4, 1});
    edges.push_back({3, 5, 2});
    edges.push_back({4, 5, 4});
    edges.push_back({4, 6, 3});
    edges.push_back({5, 6, 3});

    int n = 6, e = 10;
    for (int i = 0; i < e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        int w = edges[i][2];
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    solve(1,6, n);

    return 0;
}
