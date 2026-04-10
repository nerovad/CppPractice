#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
  bool hasDuplicate(vector<int> &nums) {
    unordered_set<int> seen;
    for (int num : nums) {
      if (seen.count(num)) {
        return true;
      }
      seen.insert(num);
    }
    return false;
  }
};

int main() {
  vector<int> nums = {1, 2, 4, 1};
  Solution sol;
  cout << sol.hasDuplicate(nums) << endl;
}
