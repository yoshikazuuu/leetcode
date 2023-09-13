class Solution {
public:
  vector<int> countBits(int n) {
    vector<int> count(0);
    for (int i = 0; i <= n; i++) {
      unsigned int c = 0;
      int b = i;
      while (b) {
        c += b & 1;
        b >>= 1;
      }
      count.push_back(c);
    }
    return count;
  }
};