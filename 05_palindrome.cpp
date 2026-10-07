#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        return x == reversedHalf || x == reversedHalf / 10;
    }
};

int main() {
    Solution solution;

    std::cout << std::boolalpha;
    std::cout << solution.isPalindrome(121) << std::endl;   // Output: true
    std::cout << solution.isPalindrome(-121) << std::endl;  // Output: false
    std::cout << solution.isPalindrome(10) << std::endl;    // Output: false

    return 0;
}
