class Solution {
public:
  bool isAnagram(string s, string t) {
    int length = 26;
    vector<int> s_count(length, 0);
    vector<int> t_count(length, 0);

    for (char i : s) {
      s_count[i - 'a']++;
    }
    for (char i : t) {
      t_count[i - 'a']++;
    }

    for (int i = 0; i < length; i++) {
      if (s_count[i] != t_count[i])
        return false;
    }

    return true;
  }
};