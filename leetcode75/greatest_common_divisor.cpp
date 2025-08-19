// greatest_common_divisor_of_strings
#include <iostream>
#include <string>
#include <numeric> // for std::gcd
using namespace std;

int main() {
    string str1 = "ABCABCABC";
    string str2 = "ABC";

    // Check if concatenation order matters
    if (str1 + str2 != str2 + str1) {
        cout << "Output: \"\"" << endl; // no common divisor string
        return 0; 
    }

    // Find GCD of lengths
    int gcdlen = gcd(str1.size(), str2.size());

    // Substring from 0 to gcdlen is the answer
    cout << "Output: \"" << str1.substr(0, gcdlen) << "\"" << endl;
}
