class Solution {
public:
  void setZeroes(vector<vector<int>> &matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<pair<long, long>> idx;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (matrix[i][j] == 0) {
          idx.push_back(make_pair(i, j));
        }
      }
    }

    for (int i = 0; i < idx.size(); i++) {
      for (int j = 0; j < m; j++) {
        matrix[idx[i].first][j] = 0;
      }
      for (int j = 0; j < n; j++) {
        matrix[j][idx[i].second] = 0;
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (matrix[i][j] == 0) {
          cout << matrix[i][j];
        }
      }
    }
  }
};