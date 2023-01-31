#include <string>
#include <vector>

class LongestConsec {
public:
  static std::string longestConsec(const std::vector<std::string> &strarr, int k) {
    if (strarr.empty() || k <= 0 || k > strarr.size()) {
      return "";
    }
    int max_length = 0;
    int max_start = 0;
    for (int i = 0; i <= strarr.size() - k; i++) {
      int length = 0;
      for (int j = i; j < i + k; j++) {
        length += strarr[j].length();
      }
      if (length > max_length) {
        max_length = length;
        max_start = i;
      }
    }
    std::string result;
    for (int i = max_start; i < max_start + k; i++) {
      result += strarr[i];
    }
    return result;
  }
};
