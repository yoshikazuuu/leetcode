class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> first_string(26, 0);
        for (int i; i < s.size(); ++i)
            first_string[int(s[i])]++;
        vector<int> second_string(26, 0);
        for (int i; i < t.size(); ++i)
            second_string[int(t[i])]++;

        return first_string == second_string;
    }
};
