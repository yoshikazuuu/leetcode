#include <bits/stdc++.h>
#define ll long long
#define INF 1000000000000000003
#define MOD 1e9 + 7

#define f(i, a, b) for (int i = a; i < b; i++)
#define fz(i, a) f(i, 0, a)
#define ffz(i, j, a, b) f(i, 0, a) f(j, 0, b)

#define vi(name, type, n) vector<type> name(n, 0);
#define vin(name, n) fz(i, n) cin >> name[i];
#define vout(name, n) fz(i, n) cout << name[i] << " ";

class Solution {
public:
  vector<int> kWeakestRows(vector<vector<int>> &mat, int k) {
    vector<pair<int, int>> v;
    fz(i, mat.size()) {
      int count = 0;
      fz(j, mat[i].size()) {
        if (mat[i][j] == 1) {
          count++;
        }
      }
      v.push_back(make_pair(count, i));
    }
    sort(v.begin(), v.end());
    vector<int> ans;
    fz(i, k) { ans.push_back(v[i].second); }
    return ans;
  }
};
