#include <bits/stdc++.h>
using namespace std;

void solve(int i, int j, vector<vector<int>> &m, int n, vector<string> &ans, string path,
           vector<vector<int>> &vis, int di[], int dj[], string dir) {

    if (i == n - 1 && j == n - 1) { 
        ans.push_back(path); 
        return; 
    }

    vis[i][j] = 1;
    for (int ind = 0; ind < 4; ind++) {
        int nexti = i + di[ind], nextj = j + dj[ind];
        if (nexti >= 0 && nextj >= 0 && nexti < n && nextj < n && !vis[nexti][nextj] && m[nexti][nextj])
            solve(nexti, nextj, m, n, ans, path + dir[ind], vis, di, dj, dir);
    }
    vis[i][j] = 0;
}

vector<string> findPath(vector<vector<int>> &m, int n) {
    vector<string> ans;
    if (!m[0][0]) return ans;

    vector<vector<int>> vis(n, vector<int>(n, 0));
    int di[] = {1, 0, 0, -1};
    int dj[] = {0, -1, 1, 0};
    string dir = "DLRU";  // lackcikoGraphical order

    solve(0, 0, m, n, ans, "", vis, di, dj, dir);
    return ans;
}



int main() {
    vector<vector<int>> m = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };
    int n = 4;

    vector<string> ans = findPath(m, n);
    if (ans.empty()) cout << "No path";
    else for (auto &s : ans) cout << s << " ";
}
