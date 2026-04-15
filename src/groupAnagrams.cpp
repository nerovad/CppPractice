#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

class Solution {
public:
  std::vector<std::vector<std::string>>
  groupAnagrams(std::vector<std::string> &strs) {
    std::unordered_map<std::string, std::vector<std::string>> res;
    for (const auto &s : strs) {
      std::vector<int> count(26, 0);
      for (char c : s) {
        count[c - 'a']++;
      }
      std::string key = std::to_string(count[0]);
      for (int i = 1; i < 26; ++i) {
        key += ',' + std::to_string(count[i]);
      }
      res[key].push_back(s);
    }
    std::vector<std::vector<std::string>> result;
    for (const auto &pair : res) {
      result.push_back(pair.second);
    }
    return result;
  }
};

int main() {
  Solution sol;
  std::vector<std::string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
  auto groups = sol.groupAnagrams(input);

  for (const auto &group : groups) {
    std::cout << "[ ";
    for (const auto &word : group) {
      std::cout << word << " ";
    }
    std::cout << "]\n";
  }
  return 0;
}
