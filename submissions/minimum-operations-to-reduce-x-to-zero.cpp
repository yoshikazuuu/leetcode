class Solution {
public:
  int minOperations(vector<int> &nums, int x) {
    int n = nums.size();
    int min_opt = -1;
    bool flag = false;

    // Calculate the total sum of the array
    int total = accumulate(nums.begin(), nums.end(), 0);

    int curr = total; // Initialize curr to the total sum
    int left = 0;

    for (int right = 0; right < n; right++) {
      curr -= nums[right];
      cout << "curr: " << curr << '\n';

      while (curr < x && left <= right) {
        curr += nums[left];
        cout << "curr: " << curr << '\n';
        left++;
      }

      if (curr == x) {
        int operations = (n - 1 - right) + left;
        if (min_opt == -1 || operations < min_opt) {
          min_opt = operations;
        }
      }
      cout << "min opt: " << min_opt << '\n';
      cout << "left: " << left << '\n';
      cout << "right: " << right << '\n';
      cout << "+++++++++++++++++" << '\n';
    }

    return min_opt;
  }
};
