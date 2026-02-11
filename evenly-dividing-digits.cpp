#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int original = n;
        int count = 0;

        while (n > 0) {
            int lastdigit = n % 10;

            if (lastdigit != 0 && original % lastdigit == 0) {
                count++;
            }
            n = n / 10;
        }
        return count;
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Count: " << obj.evenlyDivides(n) << endl;
    return 0;
}
