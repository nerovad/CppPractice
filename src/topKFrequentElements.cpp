#include <unordered_map>
#include <vector>

class Solution {
public:
  std::vector<int> topKFrequent(std::vector<int> &nums, int k) {
    std::unordered_map<int, int> count;
    std::vector<std::vector<int>> freq(nums.size() + 1);

    for (int n : nums) {
      count[n] = 1 + count[n];
    }
    for (const auto &entry : count) {
      freq[entry.second].push_back(entry.first);
    }

    std::vector<int> res;
    for (int i = freq.size() - 1; i > 0; --i) {
      for (int n : freq[i]) {
        res.push_back(n);
        if (res.size() == k) {
          return res;
        }
      }
    }
    return res;
  }
};
