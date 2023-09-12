class Solution {
public:
  bool isValid(string s) {
    stack<char> stack;
    for (auto i : s) {
      if (stack.empty()) {
        stack.push(i);
      } else if ((i == ')' && stack.top() == '(') ||
                 (i == ']' && stack.top() == '[') ||
                 (i == '}' && stack.top() == '{')) {
        stack.pop();
      } else {
        stack.push(i);
      }
    }
    return stack.empty();
  }
};