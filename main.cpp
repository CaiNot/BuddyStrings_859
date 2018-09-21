#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool buddyStrings(string A, string B) {
        if (A.size() != B.size() || A.size() < 2) {
            return false;
        }
        int len = A.size();
        char a_1, a_2, b_1, b_2;
        int count = 0;
        for (int i = 0; i < len; i++) {
            if (A[i] != B[i]) {
                if (count == 0) {
                    a_1 = A[i];
                    b_1 = B[i];
                } else if (count == 1) {
                    a_2 = A[i];
                    b_2 = B[i];
                } else return false;
                count++;
            }
        }
        if (count == 0) {
            if (len > 26)
                return true;
            bool n[26] = {0};
            for (int i = 0; i < len; i++) {
                if (n[A[i] - 'a'])
                    return true;
                n[A[i] - 'a'] = 1;
            }
            return false;
        }
        if (a_1 == b_2 && a_2 == b_1) {
            return true;
        }
        return false;
    }
};

struct AClass {
    mutable int a = 10;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    string A = "a", B = "a";
    Solution s;

    const AClass AC;
    AC.a = 20;
    cout << AC.a << endl;

    cout << s.buddyStrings(A, B);
    return 0;
}