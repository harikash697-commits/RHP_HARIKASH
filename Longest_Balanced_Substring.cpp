#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int zeros = 0;
        int ones = 0;
        int longest = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                // Start a new group if a 0 comes after a 1
                if (i > 0 && s[i - 1] == '1') {
                    zeros = 0;
                    ones = 0;
                }
                zeros++;
                
            } else {
                ones++;
                int currentLength = 2 * min(zeros, ones);
                longest = max(longest, currentLength);
            }
        }
        return longest;
    }
};

int main() {
    string s;
    cin >> s;

    Solution obj;
    cout << obj.findTheLongestBalancedSubstring(s);
    return 0;
}