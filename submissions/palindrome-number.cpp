class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0) {
      return false;
    }

    vector<int> v;

    while (x > 0) {
      int lastDigit = x % 10;
      v.push_back(lastDigit);
      x /= 10;
    }

    int n = v.size();
    for (int i = 0; i < n / 2; i++) {
      if (v[i] != v[n - i - 1])
        return false;
    }

    return true;
  }
};